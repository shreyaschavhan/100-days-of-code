#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    int count[10] = {0};
    while(scanf("%c", &ch) == 1){
        if(ch >= '0' & ch <= '9'){
            count[ch - '0']++;
        }
    }
    for(int j = 0; j < 10; j++){
        printf("%d ", count[j]);
    }
    return 0;
}
