#include <stdio.h>

int main(){
    int row;
    //int alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    printf("enter the number of rows: ");
    scanf("%d", &row);

    for(int r = 1; r <= row; r++){
        for (int i = r; i >= 1; i--){
            printf("%c ", (char)(i+64)); //ascii value of A is 65 while a is 97. So here, to print A, we have to add 64 to the initial value.

        }
        printf("\n");
    }
    return 0;
}