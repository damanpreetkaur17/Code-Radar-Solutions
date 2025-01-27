#include <stdio.h>

int main(){
    int a;
    sacnf("%d", &a);
    if (a>0)
    {
        printf("Positive %d", a);
    }
    else 
    {
        printf("Negative %d", a);
    }
    return 0;
}