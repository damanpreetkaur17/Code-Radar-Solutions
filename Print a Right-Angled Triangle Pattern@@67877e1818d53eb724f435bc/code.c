#include <stdio.h>

int main() {
    int rows,cols;
    scanf("%d\n", &rows);
    scanf("%d\n", &cols);
    char symbol;
    scanf("%c", &symbol);
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j <=cols; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}