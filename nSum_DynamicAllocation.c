#include <stdio.h>
#include <stdlib.h> //included for memory allocation
int main(){
    int n, sum = 0; 
    int*ptr; //declaring pointer to point to addresses for elements

    printf("Enter number of terms:");
    scanf("%d", &n);

    ptr = (int*) malloc (n * sizeof(int)); //allocating memory according to the number of terms

    printf("Enter %d terms:", n);

    //while loop to enter the elements in the memory created and then adding to sum
    while(n > 0){
        scanf("%d", ptr);
        sum += *ptr;
        n--;   //decrementing the number of terms for each memory allocated
        ptr++; //incrementing the memory address for each element
    }
    free(ptr);

    printf("Sum of elements: %d", sum);
    return 0;
}