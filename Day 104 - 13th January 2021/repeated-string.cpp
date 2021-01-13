#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count = 0;
    for(long i = 0; i < s.length(); i++){
        if(s[i] == 'a'){
            count++;
        }
    }
    count = count * (n / s.length());
    int extra = n % s.length();
    // cout << extra;
    for(int i = 0; i < extra; i++){
        if(s[i] == 'a'){
            count++;
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}


/*

// This cause tremendious waste of memory so abort is called.
#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    // if(s == "a"){
    //     return n;
    // }

    while(s.length() < n){
        s += s;
    }
    long count = 0;
    for(long i = 0; i < n; i++){
        if(s[i] == 'a'){
            count++;
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

*/
