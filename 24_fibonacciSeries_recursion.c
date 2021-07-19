#include <stdio.h>

int fibonacci(int n){
    static int n1 = 0, n2 = 1, n3 = 0; //using static storage class as every time the function is called wihtin function, variable must retain the previous value.
    if(n > 0){
        printf(" %d  ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        fibonacci(n-1);             //function called recursively
    }
}
int main(){
    int terms;
    printf("Enter the number of terms:");
    scanf("%d",&terms);

    fibonacci(terms);
    
    return 0;
}