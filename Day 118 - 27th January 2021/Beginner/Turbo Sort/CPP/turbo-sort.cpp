#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector <int> toSort;
    for(int i = 0; i < t; i++){
        int Num;
        cin >> Num;
        toSort.push_back(Num);
    }
    sort(toSort.begin(), toSort.end());
    for(int i: toSort){
        cout << i << '\n';
    }
    return 0;
}
