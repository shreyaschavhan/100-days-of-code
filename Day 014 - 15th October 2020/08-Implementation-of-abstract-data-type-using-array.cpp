#include <iostream>
#include <cstdlib>
using namespace std;

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize){
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int*)malloc(tSize * sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int*)malloc(tSize * sizeof(int));
}

void show(struct myArray *a){
    for (int i = 0; i < a->used_size ; i++) {
        cout << (a->ptr)[i] << endl;
    }
}

void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size ; i++) {
        cout << "Enter element " << i << ": ";
        cin >> n;
        (a->ptr)[i] = n ;
        cout << endl;
    }
}

int main(){
    struct myArray marks;
    createArray(&marks, 10, 2);
    cout << "We are running setVal now: " endl;
    setVal(&marks);
    cout << "We are running show now: " endl;
    show(&marks);
    return 0;
}
