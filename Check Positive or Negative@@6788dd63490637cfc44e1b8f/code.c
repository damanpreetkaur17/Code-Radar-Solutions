#include <stdio.h>

int main(){
    int a;
    sacnf("%d", &a);
    if (a>0)
    {
        printf("Positive %d");
    }
    else 
    {
        printf("Negative %d");
    }
    return 0;
}