//10.	WAP to Find the Largest Number Among Three Numbers
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 numbers: \n");
    scanf("%d\n%d\n%d", &a,&b,&c);

    if (a>b){
        if (a>c){
            printf("%d", a);
        }
        else{
            printf("%d",c);
        }
    }
    else{
        if(b>c){
            printf("%d", b);
        }
        else{
            printf("%d", c);
        }
    }
    return 0;
}