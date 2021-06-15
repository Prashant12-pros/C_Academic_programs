#include <stdio.h>

int main(){
    int n1 = 0, n2 = 1, n3, terms;
    printf("Enter number of terms:");
    scanf("%d",&terms);

    printf("%d  %d  ",n1, n2);

    for(int i = 0; i < terms-2; i++){
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf("%d  ",n3);
    }
    return 0;
}