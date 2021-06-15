#include <stdio.h>

int fibonacci(int n){
    static int n1 = 0, n2 = 1, n3; //using static storage class as every time the function is called wihtin function, variable must retain the previous value.
    if(n > 0){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf(" %d  ", n3);
        fibonacci(n-1);             //function called recursively
    }
}
int main(){
    int n1 = 0, n2 = 1, terms;
    printf("Enter the number of terms:");
    scanf("%d",&terms);

    printf("%d  %d  ", n1, n2); //for printing the first 2 numbers

    fibonacci(terms-2);
    // if (terms == 1)
    //     printf("%d  ",n1);
    // else if(terms == 2)
    //     printf("%d  %d  ",n1,n2);
    // else{
    //     printf("%d  %d  ",n1, n2);
    //     fibonacci(terms);
    // }
    
    return 0;
}