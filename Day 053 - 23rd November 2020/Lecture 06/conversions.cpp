#include <bits/stdc++.h>
using namespace std;

int binaryTOdecimal(int n){
    int ans = 0;
    int x = 1;
    while(n > 0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalTOdecimal(int n){
    int ans = 0;
    int x = 1;
    while(n > 0){
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int HexadecimalTOdecimal(string n){
    int ans = 0;
    int x = 1;

    int s = n.size();
    for(int i =  s - 1; i >= 0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int decimalTObinary(int n){
    int ans = 0;
    int x = 1;
    while(x <= n){
        x *= 2;
    }
    x /= 2;
    while(x > 0){
        int lastdigit = n/x;
        n -= lastdigit *x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

int decimalTOoctal(int n){
    int ans = 0;
    int x = 1;
    while(x <= n){
        x *= 8;
    }
    x /= 8;
    while(x > 0){
        int lastdigit = n/x;
        n -= lastdigit *x;
        x /= 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

string decimalTOhexadecimal(int n){
    int x = 1;
    string ans = "";
    while(x <= n){
        x *= 16;
    }
    x /= 16;
    while(x > 0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 16;

        if(lastdigit <= 9){
            ans = ans + to_string(lastdigit);
        }
        else{
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Binary to Decimal - Enter --" ;
    cin >> n;
    cout << binaryTOdecimal(n) << endl;
    int n1;
    cout << "Octal to Decimal - Enter --" ;
    cin >> n1;
    cout << octalTOdecimal(n1) << endl;
    string n2;
    cout << "Hexadecimal to Decimal - Enter --" ;
    cin >> n2;
    cout << HexadecimalTOdecimal(n2) << endl;
    int n3;
    cout << "decimal to binary - Enter --" ;
    cin >> n3;
    cout << decimalTObinary(n3) << endl;
    int n4;
    cout << "decimal to Octal - Enter --" ;
    cin >> n4;
    cout << decimalTOoctal(n4) << endl;
    int n5;
    cout << "decimal to Hexadecimal - Enter --" ;
    cin >> n5;
    cout << decimalTOhexadecimal(n5) << endl;
    return 0;
}
