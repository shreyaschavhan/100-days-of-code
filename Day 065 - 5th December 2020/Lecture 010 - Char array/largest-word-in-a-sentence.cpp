#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore(); // to clear buffer.
    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxSt = 0;
    while(true){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currLen > maxLen){
                maxLen = currLen;
                maxSt = st;
            }
            currLen = 0;
            st = i+1;
        }
        else{
            currLen++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout << maxLen << endl;
    for(int i = 0; i < maxLen; i++){
        cout << arr[maxSt + i];
    }

    return 0;
}
