#include <stdio.h>

int main() {
    int a;
    scan("%d", &a);
    int msb = a & (1<<31);
    if (msb)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
    return 0;
}