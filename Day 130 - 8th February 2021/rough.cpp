#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,t,n,cA,cB,result,rA,rB;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        cA =0,cB=0;
        result = 2*n;
        rA = n,rB=n;
        for(i=0;i<2*n;i++){
            if(cA - cB > rB || cB - cA > rA) {
                cout<<"cA= "<<cA<<"cB = "<<cB<<"rA = "<<rA<<"rB ="<<rB;
                result = i;
                break;
            }
            if(i % 2 == 0){
                cA += (s[i] - 48);
                rA--;
            }else{
                cB += (s[i] - 48);
                rB--;
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}
