#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int j, i;
    cin >> t;
    int ans[60];
    int carry = 0;
    memset(ans, 0, sizeof(ans));
    for(int a = 0; a < t; a++){
        string num;
        cin >> num;
        for(i = 49, j = 0; i >= 0; i--, j++){
            carry = (ans[j] + (num[i] - '0'))/10;
            // cout << carry << endl;
            ans[j + 1] += carry;
            ans[j] = (ans[j] + (num[i] - '0')) % 10;
        }
        // for(int k : ans){
        //     cout << k << " ";
        // }
        // cout << endl;
    }
    int k = 1;
    if(ans[j] == 0)
        j--;

    // for(int k : ans){
    //     cout << k << " ";
    // }
    // cout << endl;

    for(i = j ; k <= 10; i--)
    {
        if(ans[i]/10 != 0)
        {
            int temp = ans[i];
            while(temp != 0)
            {
                temp = temp/10;
                // cout << temp << endl;
                k++;
            }
        }
        else    k++;
        // k++;

        printf("%d", ans[i]);
    }
    return 0;
}
