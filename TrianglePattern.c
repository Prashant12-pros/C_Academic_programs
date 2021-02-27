#include <stdio.h>

int main(){
    int n, r,k;

    printf("Enter the no of terms: ");
    scanf("%d", &n);

    for (r =1; r <= n; r++){
        for(k=1; k <= n-r; k++)/* for printing spaces...as spaces are decreasing, and as r is increasing by 1 each iteration, it can be subtrated by n which is constant thus decreasing it*/
        printf(" ");

        for(k = 1; k <= (2*r)-1; k++)/*here, for printing star, as the no of star is odd, and r is increasing 1 by each iteration, so formula goes as (2*term)-1 for each term*/
        printf("*");

        printf("\n");
    }
    // int n, i;
    // printf("Enter terms");
    // scanf("%d", &n);
    
    // for(i = n; i >= 0; i-- ){
    //     for (int j = 1; j <= i-1; j++){
    //         printf("_");
    //     }
    //     for (int k = 0; k <= n; k++){
    //         printf("*");
    //         }
        
    //     printf("\n");
    // }





    // int n;

    // printf("enter:");
    // scanf("%d", &n);

    // for (int i = n; i == 0; --i){
    //     printf("*");
    // }
    return 0;
}