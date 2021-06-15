/*20.	Write a program to find sum of n elements entered by the user. To write this program,
        allocate memory dynamically using malloc() / calloc() functions or new operator.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *element; //pointer element to work on array.
    int n, sum = 0; //sum initialized to 0

    printf("Enter number of elements: ");
    scanf("%d", &n);

    element = (int *)malloc(n * sizeof(int)); //using malloc func to allocate memory and casting it to integer pointer

    printf("Enter the value of elements.\n");

    //for loop to scan input and add to sum simultaneously
    for(int i = 0; i < n; i++){
        scanf("%d", element);
        sum = sum + *(element);
    }
    //while this loop was in execution, sum printed the memory address' sum.
    // for(int i = 0; i < n; i++){
    //     sum = sum + *element;
    //     element++;
    // }

    printf("\nThe sum of elements entered is : %d", sum);
    free(element); //free function frees the allocated memory at the end of the program.
    return 0;
}