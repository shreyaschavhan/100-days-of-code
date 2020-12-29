#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> a) {
    // int count = 1;
    int maxCount = 2;
    int len = a.size();
    sort(a.begin(), a.end());
    for(int j = 0; j < len; j++){
        int count = 0;
        for(int i = 0; i < len; i++){
            if(i != j){
                if(abs(a[j] - a[i]) <= 1){
                    count++;
                    maxCount = max(count, maxCount);
                }
            }
        }
    }

    return maxCount;
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
