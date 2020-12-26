#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;

// sieve method for prime calculation
bool prime[MAX + 1];

// Function to mark the primes
void sieve()
{
    memset(prime, true, sizeof(prime));

    // mark the primes
    for (int p = 2; p * p < MAX; p++)
        if (prime[p] == true)

            // mark the factors of prime as non prime
            for (int i = p * 2; i < MAX; i += p)
                prime[i] = false;
}

// Function for finding no. of divisors
int divCount(int n)
{
    // Traversing through all prime numbers
    int total = 1;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {

            // calculate number of divisor
            // with formula total div =
            // (p1+1) * (p2+1) *.....* (pn+1)
            // where n = (a1^p1)*(a2^p2)....
            // *(an^pn) ai being prime divisor
            // for n and pi are their respective
            // power in factorization
            int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    return total;
}

// Function to find the first triangular number
int findNumber(int n)
{

    if (n == 1)
        return 3;

    // initial number
    int i = 2;

    // initial count of divisors
    int count = 0;

    // prestore the value
    int second = 1;
    int first = 1;

    // iterate till we get the first triangular number
    while (count <= n) {

        // even
        if (i % 2 == 0) {

            // function call to count divisors
            first = divCount(i + 1);

            // multiply with previous value
            count = first * second;
        }
        // odd step
        else {

            // function call to count divisors
            second = divCount((i + 1) / 2);

            // multiply with previous value
            count = first * second;
        }

        i++;
    }

    return i * (i - 1) / 2;
}

// Driver Code
int main()
{
    int t;
    cin >> t;
    sieve();
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        cout << findNumber(n) << endl;
    }

    // Call the sieve function for prime

 return 0;
}
