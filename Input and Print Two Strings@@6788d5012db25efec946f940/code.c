#include <stdio.h>

int main(){
    char a[100];
    scanf("%c", &a);
    getchar();
    char b[100];
    scanf("%c", &b);
    printf("You entered: %c and %c", a,b);
    return 0;
}