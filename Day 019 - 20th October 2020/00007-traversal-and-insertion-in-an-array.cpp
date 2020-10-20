#include <iostream>
using namespace std;

void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int indexInsertion(int arr[], int size, int element, int index, int capacity){
    if (size >= capacity){
        return -1;
    }
    else{
        for(int i = size; i >= index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}

int main(){
    int arr[100] = {7, 8 , 10 , 23 , 99};
    int size =  5, element = 45, index = 3;
    display(arr, size);
    cout << endl;
    if (indexInsertion(arr, size, element, index, 100) == -1){
        cout << "Insertion Failed" << endl;
    }
    else{
        indexInsertion(arr, size, element, index, 100);
        size += 1;
        display(arr, size);
    }
    return 0;
}
