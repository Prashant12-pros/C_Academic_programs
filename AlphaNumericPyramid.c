#include <stdio.h>

int main(){
    int row;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++){
        for(int space = 1; space <= row - i; space++){ //prints space for every row
            printf(" ");
        }

        for (int j = 1; j <= i; j++){ //prints the number upto the number provided for rows
            printf("%d", j); 
        }

        printf(" ");//this adds a space beetween the number and alphabet sequence in a row.

        for(int alpha = 1; alpha <= i; alpha++){ //prints alphabet for each row
            printf("%c", (char)(alpha + 64)); /*as, A has ascii code 65 and increases for every letter respectively, 
            thus taking the number and adding to 64 as it increases*/
        }

        printf("\n");
    }
    return 0;
}