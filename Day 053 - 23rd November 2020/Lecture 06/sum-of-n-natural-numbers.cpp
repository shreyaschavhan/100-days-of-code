#include <iostream>
using namespace std;

int natural(int n){
    int sum = (n*(n+1))/2;
    return sum;
}


int main(){
    int n;
    cin >> n;
    int ans = natural(n);
    cout << ans;
    return 0;
}
