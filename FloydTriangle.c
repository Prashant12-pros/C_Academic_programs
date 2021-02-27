#include <stdio.h>

int main(){
    int row, number = 1, space;

    printf("Enter the number of rows:\t");
    scanf("%d", &row);

    for (int r = 0; r <= row; r++){
        for (space = 1; space <= row - r; space++){
            printf(" ");
        }

        for (int e = 1; e <= r; e++){
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }
    return 0;
}