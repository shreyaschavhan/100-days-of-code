#include <iostream>
using namespace std;

void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void indexDeletion(int arr[], int size, int index){

    for(int i = index; i < size - 1; i++){
        arr[i] = arr[i+1];
    }

}

int main(){
    int arr[100] = {7, 8 , 10 , 23 , 99};
    int size =  5, element = 45, index = 3;
    display(arr, size);
    cout << endl;

    indexDeletion(arr, size, index);
    size -= 1;
    cout << "After deletion - " << endl;
    display(arr, size);

    return 0;
}
