#include <iostream>
using namespace std;

void fib(int num){
    int t1 = 0;
    int t2 = 1;
    int nextTern;
    for(int i = 1; i <= num; i++){
        cout << t1 << " ";
        nextTern = t1 + t2;
        t1 = t2;
        t2 = nextTern;
    }
}

int main(){
    int n;
    cin >> n;
    fib(n);
    return 0;
}
