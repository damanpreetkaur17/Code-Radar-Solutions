#include <stdio.h>

int main(){
    int a, i;
    scanf("%d", &a);
    if (a<=0)
    {
        printf("Not Prime");
    }
    else if (a==2)
    {
        printf("Prime");
    }
    else if (a%2=0)
    {
        printf("Prime");
    }
    else if (a%3==0)
    {
        printf("Not Prime");
    }
    else if (a%5==0)
    {
        printf("Not Prime");
    }
    else if (a%7==0)
    {
        printf("Not Prime");
    } 
    else
    {
        printf("Prime");
    }
    return 0;
}