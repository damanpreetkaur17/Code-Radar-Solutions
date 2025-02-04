#include <stdio.h>

int findLowestSetBitPosition(int n){
    int position = 0;
    while(n>0){
        if (n%2==1){
            return position;
        }
        n = n/2;
        position++;
    }
    return -1;
int main(){
    int n;
    scanf("%d", &n);
    int result = findLowestSetBitPosition(n);
    printf("%d", result);
}
return 0;
}