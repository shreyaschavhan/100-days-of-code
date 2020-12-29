#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> a) {
    int count = 1;
    int len = a.size();
    for(int i = 0; i < len; i++){
        if(i+1 < len){
            if(abs(a[i] - a[i+1]) <= 1){
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    cout << pickingNumbers(a) << endl;
    return 0;
}
