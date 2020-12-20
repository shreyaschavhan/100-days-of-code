#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr;
    int n;
    cin >> n;
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr.push_back(num);
    }
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum: " << sum << endl;
    return 0;
}
