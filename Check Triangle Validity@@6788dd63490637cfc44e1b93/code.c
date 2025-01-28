#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a<b && b<c)
    {
        print("Valid");
    }
    else
    {
        print("Invalid");
    }
    return 0;
}