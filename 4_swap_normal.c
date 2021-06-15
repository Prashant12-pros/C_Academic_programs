//4.    WAP to swap two number
#include <stdio.h>

int main(){
    int a, b, temp = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1st num = %d \n2nd num = %d\n", a,b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:");
    printf("1st num = %d \n2nd num = %d ",a,b);
    return 0;
}