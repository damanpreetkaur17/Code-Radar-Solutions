#include <stdio.h>

int countLeadingZeroes(int n){
    int count = 0;
    if(n == 0){
        return 32;
    }
    while( n< (1 << 31)){
        n = n << 1;
        count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    int result = countLeadingZeroes(n);
    printf("%d", result);
    return 0;
}