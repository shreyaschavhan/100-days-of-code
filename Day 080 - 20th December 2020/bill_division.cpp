#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {
    // double b_charged = 0;
    // for(int i : bill){
    //     if(i != bill[k]){
    //         b_charged += i;
    //     }
    // }
    // b_charged /= 2;
    // if(b_charged == b){
    //     cout << "Bon Appetit" << endl;
    // }
    // else{
    //     cout << int(b - b_charged) << endl;
    // }
    double b_charged = accumulate(bill.begin(), bill.end(), 0)/2 - bill[k]/2;
    if(b_charged == b){
        cout << "Bon Appetit" << endl;
    }
    else{
        cout << int(b - b_charged) << endl;
    }
}

int main()
{
    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split(rtrim(nk_temp));

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string bill_temp_temp;
    getline(cin, bill_temp_temp);

    vector<string> bill_temp = split(rtrim(bill_temp_temp));

    vector<int> bill(n);

    for (int i = 0; i < n; i++) {
        int bill_item = stoi(bill_temp[i]);

        bill[i] = bill_item;
    }

    string b_temp;
    getline(cin, b_temp);

    int b = stoi(ltrim(rtrim(b_temp)));

    bonAppetit(bill, k, b);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
