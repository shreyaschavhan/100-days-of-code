#include <bits/stdc++.h>
using namespace std;

int beautifulTriplets(int d, vector<int> arr) {
    int countTriplets = 0;
    for(int i = 0; i < arr.size(); i++){
        int k = arr[i];
        int count = 0;
        for(int j = i+1; j < arr.size(); j++){
            if(arr[j] - k == d){
                // cout << arr[j] << " - " << k << " = " << d << '\n';
                k = arr[j];
                count++;
                if(count == 2){
                    break;
                }
            }
        }
        // cout << count << '\n';
        if(count == 2){
            countTriplets++;
        }
    }
    return countTriplets;

}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;
    vector <int> arr;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << beautifulTriplets(d, arr) << '\n';
    return 0;
}
