//6.	WAP to compute the factors of a given number.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf ("%d", &n);

    printf("The factors of %d are: \n", n);

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d\n", i);
        }

    }
    return 0;
}