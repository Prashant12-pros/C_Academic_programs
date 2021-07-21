#include <stdio.h>

int main(void) {
    int n,fact=1;
    int a[1000]={1},k=0,carry=0,j,i;

    printf("Enter the number to print factorial: ");
    scanf("%d",&n);
    
    //for loop iterates to store the resultant number in the array
    for(i=1;i<=n;i++){
        for(j=0;j<=k;j++){
            a[j]=a[j]*i+carry;
            carry=a[j]/10;
            a[j]=a[j]%10;
        }

        while(carry){
            k++;
            a[k]=carry%10;
            carry/=10;
        }
    }
    //printing the array from the last position to the first one for factorial.
    for(j=k;j>=0;j--){
        printf("%d",a[j]);
    }
    printf("\n");

	return 0;
}