
#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int i = 0;
    if(!s.compare(t) && k >= 0){
        return "Yes";
    }
    else if(t.length() > s.length()){
        if ((t.length() + s.length())%2 == 0){
            return "Yes";
        }
        return "No";
    }
    while(s[i] == t[i]){
        s = s.substr(i + 1);
        t = t.substr(i + 1);
    }
    if((s.length()+t.length()) <= k){
        return "Yes";
    }
    return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}



// Attempt 1 - 2 failed out of 14
/*
#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int i = 0;
    if(!s.compare(t) && k >= 0){
        return "Yes";
    }
    while(s[i] == t[i]){
        s = s.substr(i + 1);
        t = t.substr(i + 1);
    }
    if((s.length()+t.length()) <= k){
        return "Yes";
    }
    return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

*/
