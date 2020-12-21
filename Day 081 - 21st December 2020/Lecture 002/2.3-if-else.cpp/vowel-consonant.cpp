#include <bits/stdc++.h>
using namespace std;

int main(){
    char letter;
    cin >> letter;
    bool flag = 0;
    char vowels[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    for(int i = 0; i < 10; i++){
        if(letter == vowels[i]){
            flag = 1;
        }
    }
    if(!flag)
        cout << "consonant" << endl;
    else
        cout << "vowel" << endl;
    return 0;
}
