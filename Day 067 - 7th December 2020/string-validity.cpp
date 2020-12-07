// Link : https://www.hackerrank.com/contests/freshers-challenge-19/challenges/string-validity/problem
/*
My answer:
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string tocheck;
        cin >> tocheck;
        vector <int> save_index;
        for(unsigned int i = 0; i < tocheck.size(); i++){
            if(isdigit(tocheck[i]) == true){
                save_index.push_back(i);
            }
        }
        int n = save_index.size();
        // cout << "size : " << n << endl;
        // cout << "string: ";
        // for(int i : tocheck){
        //     cout << i << endl;
        // }
        // cout << "Index: ";
        // for(int j : save_index){
        //     cout << j << endl;
        // }

        bool valid = 0;
        for(int j = 0; j < n; j++){
            if(j+1 < n){
            int count_Qmark = 0;
            int num1 = tocheck[save_index[j]] - '0';
            // cout << "Num1: " << num1 << endl;
            int num2 = tocheck[save_index[j+1]] - '0';
            // cout << "Num2: " << num2 << endl;
            int sum_of_num = num1 + num2;
            // cout << "Sum: " << sum_of_num;
            for(int k = save_index[j]; k < save_index[j+1] ; k++){
                // cout << "tocheck[]] : " << tocheck[num1] << endl;
                if(tocheck[k] == '?'){
                    count_Qmark++;
                }
            }
            // cout << "Number Count: " << count_Qmark << endl;
            if(count_Qmark == sum_of_num){
                valid = 1;
            }
            }
        }
        if(valid == 1){
            cout << "Valid" << endl;
        }
        else{
            cout << "Invalid" << endl;
        }
        // t--;
        // j++;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef long double ldo;
template <class C> void setmin(C &a,C b){if(a>b)a=b;}
template <class C> void setmax(C &a,C b){if(a<b)a=b;}
#define MOD                (ll)1000000007
#define vll                vector<ll>
#define forz(iter,n)    for(ll iter=0;iter<n;++iter)
#define urep(iter,s,e)    for(ll iter=s;iter>=e;--iter)
#define rep(iter,s,e)    for(ll iter=s;iter<e;++iter)
#define print(A,n)        {forz(iter,n)cout<<A[iter]<<' ';cout<<endl;}
#define printv(vec)        {for(auto const&iter:vec)cout<<iter<<' ';cout<<endl;}
#define take(A,n)        {forz(iter,n)cin>>A[iter];}
#define pb                push_back
#define pob                pop_back
#define eb                emplace_back
#define pf                push_front
#define pof                pop_front
#define mkp                make_pair
#define pp                pair<ll,ll>
#define all(a)            a.begin(),a.end()
#define ff                first
#define ss                second
#define lcm(a,b)        (a*b)/__gcd(a,b)
#define bs(v,x)            binary_search(all(v),x)
#define ub(v,x)            upper_bound(all(v),x)        //x>a[<-pos]
#define lb(v,x)            lower_bound(all(v),x)        //x<=a[pos->]
#define zoom            ios_base::sync_with_stdio(false);cin.tie(NULL);
//for(auto const&x:mp)

int main()
{
    zoom;
    ll t;
    cin>>t;
    cin.ignore();
    forz(t1,t)
    {
        string a;
        getline(cin,a);
        // cout<<a<<endl;
        ll q=-MOD;
        for(auto const&x:a)
        {
            if((q!=-MOD)&&(x=='?'))
                q--;
            if((x>='0')&&(x<='9'))
            {
                if((q!=-MOD)&&(q!=-(x-'0')))
                {
                    cout<<"Invalid\n";
                    goto bhak;
                }
                q=x-'0';
            }
        }
        cout<<"Valid\n";
        bhak:
        ;
    }
    return 0;
}
