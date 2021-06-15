//8.	WAP to print the sum and product of digits of an integer.
#include <stdio.h>

int main(){
    int num, product = 1, sum =0, temp;
    printf("Enter the number: \n");
    scanf("%d", &num);

    while(num != 0){
        temp = num % 10;
        sum += temp;
        product = product * temp;
        num = num/10;
    }
    printf("The sum of the digits %d is: %d\n", num, sum);
    printf("The product of digits %d is: %d\n", num, product);
    return 0;
}