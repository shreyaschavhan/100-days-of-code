#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    int count = 0;
    for(int i = p; i <= q; i++){
        if(i == 1){
            cout << i << " ";
            count++;
        }
        if(i > 3){
            string digit = to_string(i);
            int n = digit.length();
            string num = to_string((long long)i*i);
            int r = stoi(num.substr(num.length()-n, n));
            int l = stoi(num.substr(0, num.length()-n));
            int sum = r + l;
            if(sum == i){
                cout << i << " ";
                count++;
            }
        }
    }
    if(count == 0){
        cout << "INVALID RANGE" << endl;
    }

}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}


// Attempt 1:
// #include <bits/stdc++.h>
//
// using namespace std;
//
// // Complete the kaprekarNumbers function below.
// void kaprekarNumbers(int p, int q) {
//     int count = 0;
//     for(int i = p; i <= q; i++){
//         if(i < 10){
//             string num = to_string(i*i);
//             int sum = 0;
//             for(int j = 0; j < num.length(); j++){
//                sum += (num[j]-'0');
//             }
//             if(sum == i){
//                 cout << i << " ";
//                 count++;
//             }
//         }
//         else{
//             string digit = to_string(i);
//             int n = digit.length();
//             string num = to_string(i*i);
//             int r = stoi(num.substr(num.length()-n, n));
//             int l = stoi(num.substr(0, num.length()-n));
//             int sum = r + l;
//             if(sum == i){
//                 cout << i << " ";
//                 count++;
//             }
//
//         }
//     }
//     if(count == 0){
//         cout << "INVALID RANGE" << endl;
//     }
//
// }
//
// int main()
// {
//     int p;
//     cin >> p;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//     int q;
//     cin >> q;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//     kaprekarNumbers(p, q);
//
//     return 0;
// }
