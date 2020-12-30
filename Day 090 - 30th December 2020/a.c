#include <stdio.h>
// using namespace std;

int main(){
    int n,i,j,min;
    // cin >> n;
    scanf("%d\n", &n);
    for(i=1;i<n+1;i++){
        for(j=1;j<n+1;j++){
            min = i<j ? i : j;
            // cout << n-min+1 << " ";
            printf("%d " , n-min+1);
        }
        for(j=n-1;j>0;j--){
            min = i<j ? i: j;
            // cout << n-min+1 << " ";
            printf("%d " , n-min+1);
        }
        // cout << endl;
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<n+1;j++){
            min = i<j ? i : j;
            // cout << n-min+1<< " ";
            printf("%d " , n-min+1);
        }
        for (j=n-1;j>0;j--){
            min = i<j ? i : j;
            // cout << n-min+1<< " ";
            printf("%d " , n-min+1);
        }
        // cout << endl;
    }
    return 0;
}
