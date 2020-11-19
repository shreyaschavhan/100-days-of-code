#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

void calculate_the_maximum(int n, int k) {
    // My Logic 1 ---
    // int s[n];
    // for(int i = 1; i <= n; i++){
    //     s[i - 1] = i;
    // }
    // int sz = 0;
    // for(int o = n - 1; o > 1; o-- ){
    //     sz += o;
    // }
    // int and[sz], or[sz], xor[sz];
    // int count = 0;
    // for(int j = 0; j < n; j++){
    //     for(int m = j + 1; m <= n; m++){
    //         if(s[j] != s[m]){
    //             and[count] = s[j] & s[m];
    //             or[count] = s[j] | s[m];
    //             xor[count] = s[j] ^ s[m];
    //             count++;
    //         }
    //     }
    // }
    // qsort(and, sz, sizeof(int), compare);
    // qsort(or, sz, sizeof(int), compare);
    // qsort(xor, sz, sizeof(int), compare);
    // int newcount1 = 0;
    // int newcount2 = 0;
    // int newcount3 = 0;
    // for(int p = 0; p < sz; p++){
    //     if(and[p] < k){
    //         newcount1++;
    //     }
    //     if(or[p] < k){
    //         newcount2++;
    //     }
    //     if(xor[p] < k){
    //         newcount3++;
    //     }
    // }
    // // for(int loop = 0; loop < sz; loop++)
    // //   printf("%d ", xor[loop]);
    // // // int l = sizeof(or)/sizeof(int);
    // // printf("%d\n", newcount2);
    // // printf("%d\n", l);
    // if(newcount1 == 0){
    //     printf("%d\n", 0);
    // }
    // else{
    //     printf("%d\n", and[newcount1-1]);
    // }
    // if(newcount2 == 0){
    //     printf("%d\n", 0);
    // }
    // else{
    //     printf("%d\n", or[newcount2-1]);
    // }
    // if(newcount3 == 0){
    //     printf("%d\n", 0);
    // }
    // else{
    //     printf("%d\n", xor[newcount3-1]);
    // }

    // Logic 2 - Worked
    int and = 0;
    int or = 0;
    int xor = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(i != j){
                if((i&j) > and && (i&j) < k){
                    and = i & j;
                }
                if((i|j) > or && (i|j) < k){
                    or = i | j;
                }
                if((i^j) > xor && (i^j) < k){
                    xor = i ^ j;
                }
            }
        }
    }
    printf("%d\n", and);
    printf("%d\n", or);
    printf("%d\n", xor);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
