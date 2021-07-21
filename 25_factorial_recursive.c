#include <stdio.h>

long long factorial(int a);

int main(){
    int a;
    printf("Enter the number you want the factorial of:");
    scanf("%d", &a);
    
    printf("The factorial of %d is %ld", a, factorial(a));
    
    return 0;
}

long long factorial(int a){
    if (a==0 || a==1){
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
}
    /* this fucntion calls itslef again and again untill the last number becomes to 1.
    for ex. factorial of 4 will have the following process for the answer: 
    a. the function is called 
    b.{4* factorial(3)} 
    c.{factorial(3) ,i.e. 3* factorial(2)}
    d.{factorial(2, i.e. 2*factorial(1))}
    e.{factorial(1)=1}
    f. putting altogether : 4*3*2*1 = 24 */