#include <stdio.h>
/*series: 1 + 1/2 + 1/3 + 1/4 + .....*/

int main(){
    int terms;
    float sum = 0.0f;

    printf("Enter the number of terms: \n");
    scanf("%d", &terms);

    for( float i = 1; i <= terms; i++){
        sum += ((float)1 / (float)i);
    }
    printf("The sum of terms is : %f", sum);    
    return 0;
}