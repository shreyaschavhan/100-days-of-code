// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int HashFunction(int Key){
    return (Key % 5);
}



int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5] = {0};
    int Elements;
    cin >> Elements;
    while(Elements--){
        int Insert;
        cin >> Insert;
        int index = HashFunction(Insert);
        if(arr[index] == 0){
            arr[index] = Insert;
        }
        else{
            while(arr[index] != 0){
                index++;
            }
            arr[index] = Insert;
        }
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
