//18.	Write a program in which a function is passed address of two variables and then alter its contents.
#include <stdio.h>
void change(int *x, int *y){
    *x += 10;
    *y += 10;
    printf("Value of 1st Varaible after alteration : %d\n", *x);
    printf("Value of 2nd Varaible after alteration : %d\n", *y);
}
int main(){
    int x ,y;
    printf("Enter two variables: ");
    scanf("%d %d",&x, &y);
    printf("Value of 1st variable: %d \nValue of 2nd variable: %d\n", x, y);
    change(&x, &y);
    
    return 0;
}