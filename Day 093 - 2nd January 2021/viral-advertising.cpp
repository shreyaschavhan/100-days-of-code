// LInk - https://www.hackerrank.com/challenges/strange-advertising/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int shared = 5;
    int liked;
    int cumulative;
    for(int i = 1; i <= n; i++){
        liked = shared/2;
        cumulative += liked;
        shared = liked * 3;
    }
    return cumulative;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
