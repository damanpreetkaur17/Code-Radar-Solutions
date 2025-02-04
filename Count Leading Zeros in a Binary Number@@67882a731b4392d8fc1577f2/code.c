#include <stdio.h>

int countLeadingZeroes(int n){
    int count = 0;
    while(n<(1<<31)){
        n = n<<1;
        count++;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    int result = countLeadingZeroes(n);
    printf("%d", result);
    return 0;
}