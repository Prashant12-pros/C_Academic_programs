//11.	WAP to compute the sum of the first n terms of the following series S =1-2+3-4+5…………….
#include <stdio.h>
//series: 1-2+3-4+5-6+........
/*logic: for even terms= (-1)(n/2)
        for odd terms= ((n+1)/2)*/
int main(){
    int terms, sum=0;

    printf("Enter the number of terms: \n");
    scanf("%d", &terms);

    if( terms % 2 == 0){
        sum += (-1)*(terms/2);
    }
    else{
        sum += (terms+1)/2;
    }

    printf("The sum of series upto the tems %d is %d", terms, sum);
    return 0;
}