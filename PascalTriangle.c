#include <stdio.h>

int main(){
    int row, ncr, space;

    printf("Enter number of rows:");
    scanf("%d", &row);

    for ( int n = 0; n < row; n++){ //this loop runs n for each row. as formula nCr evaluates to 1 for everytime n or r is 0.
        for (space = 1; space <= row -n; space++){//this prints the space before each row and keeps decreasing until 0.
            printf(" ");
        }
        for(int r = 0; r <= n; r++){ //this loop accounts for each element in the nth row
            if (r == 0 || n == 0){ //if statement check if r or n is 0 for ncr evaluates to 1. And as per the traingle, first elemtn of every row is 1.
                ncr = 1;
            }
            else{
                ncr = ncr * (n - r + 1)/ r;//now, this formula evaluates for the rest of the elements of the row.
            }
            printf("%2d", ncr);//here, %'2'd stands for the amount of spcaes provided for every printing element.
        }
        printf("\n");
    }
    return 0;
}