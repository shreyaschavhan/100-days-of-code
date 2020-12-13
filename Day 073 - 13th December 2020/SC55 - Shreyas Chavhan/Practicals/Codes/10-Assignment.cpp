/****************************************************************
Assignment No. 10 -
Write a function template selection sort. Write a program that
inputs, sorts and outputs an integer array and a float array.
****************************************************************/

#include <bits/stdc++.h>
using namespace std;

template <class T>

void selection_sort(T arr[], int n){
    T temp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout  << arr[i] << " ";
    }
}

int main(){
    cout << "Sorting integers: " << endl;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int int_arr[n];
    cout << "Enter array: ";
    for(int i = 0; i < n; i++){
        cin >> int_arr[i];
    }
    selection_sort(int_arr, n);
    cout << endl;
    cout << "Sorting Float numbers: " << endl;
    int m;
    cout << "Enter size of array: ";
    cin >> m;
    float float_arr[m];
    cout << "Enter array: ";
    for(int i = 0; i < m; i++){
        cin >> float_arr[i];
    }
    selection_sort(float_arr, m);
    return 0;
}
