#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int maxArray = INT_MIN;
    int minArray = INT_MAX;

    for(int j = 0; j < n; j++){
        maxArray = max(array[j], maxArray);
        minArray = min(array[j], minArray);
    }
    cout << "Max: " << maxArray << endl;
    cout << "Min: " << minArray << endl;
    return 0;
}
