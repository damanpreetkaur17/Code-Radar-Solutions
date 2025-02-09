#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int i = 31;
    int flag = 0;
    while (i>= 0){
        if ((num & (1<<i)) !=0){
            flag = 1;
            printf("1");
        }
        else {
            if (flag == 1){
                printf("0");
            }
        }
        i--;
    }
    if (flag == 0){
        printf("0");
    }
    return 0;
}