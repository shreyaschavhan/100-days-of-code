#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n;
    cin >> n;
    vector <long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    // mean -
    long sum = 0;
    float count = 0;
    for(int j = 0; j < n; j++){
        // mean -
        sum += arr[j];
        count++;
    }
    float mean = sum/count;
    cout << mean << endl;

    // median
    float median = 0;
    if(n%2 == 0){
        float median = (arr[(n-1)/2] + arr[n/2])/2.0;
        cout << median << endl;
    }
    else{
        float median = arr[n/2]/2.0;
        cout << median << endl;
    }


    // mode -
    // int count1 = 0;
    // int max_count = 0;
    // long mode = 0;
    // long value = 0;
    // for(auto i = 0; i < n; i++){
    //     value = arr[i];
    //     for(int j = i +1; j < n; j++){
    //         if(value == arr[j]){
    //             count1++;
    //      if (count1 > max_count){
    //         max_count = count1;
    //         mode = value;
    //     }
    //         }
    //         else{
    //             mode = arr[0];
    //             break;
    //         }
    //     }
    //
    //
    //
    // }



    int count1=0;
    int max_count=0;
    long mode=0;
    int value;

    value=arr[0];

    for(auto i=0; i<n; i++)
    {
       if(value==arr[i])
        {
            count1++;
            if(max_count<count1)
            {
                mode=arr[i];
                max_count=count1;
            }
        }
        else
        {
            count1=0;
            value=arr[i];
            count1++;
        }
        cout << mode << endl;
    return 0;
}
