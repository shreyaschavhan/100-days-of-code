#include <stdio.h>

int main(){
    int n;
    scanf("%d\n", &n);
    int l = 2*n - 1;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            int min;
            if(i < j){
                min = i;
            }
            else{
                min = j;
            }
            if(min < l-i){
                min = min;
            }
            else{
                min = l - i - 1;
            }
            if(min < l-j-1){
                min = min;
            }
            else{
                min = l - j - 1;
            }
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}
