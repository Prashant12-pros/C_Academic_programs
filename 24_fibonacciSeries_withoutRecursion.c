#include <stdio.h>

int main(){
    int n1 = 0, n2 = 1, n3 = 0, terms;
    printf("Enter number of terms:");
    scanf("%d",&terms);

    
    for(int i = 1; i <= terms; i++){
        printf("%d  ",n1);
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
    }
    return 0;
}