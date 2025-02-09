#include <stdio.h>

int main(){
    int num, count = 0;
    scanf("%d", &num);
    if (num == 0){
        printf("32");
        return 0;
    }
    for ( int i = 31; i>=0; i--){
        if ((num & (1<<i)) ==0){
            count++;
        }
        else {
            break;
        }
    }
    printf("%d", count);
    return 0;
}