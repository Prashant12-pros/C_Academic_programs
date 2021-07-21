#include <stdio.h>

int main(){
    int num;
    unsigned int fact = 1;
    printf("Enter number to print factorial: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        fact *= i;
    }

    printf("Factorial: %d", fact);

    return 0;
}