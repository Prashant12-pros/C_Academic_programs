//7.	WAP to enter marks of five subjects and calculate total, average and percentage.
#include <stdio.h>
#include <stdlib.h>

int main(){
    //int mark1, mark2, mark3, mark4, mark5, i;
    int marks[5];

    float total, avg, prcnt;

    // printf("Enter the marks of 5 aubjects: \n");
    // scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);
    
    
    for (int i=0; i<5 ; i++){
        printf("Enter mark %d: \n", i+1);
        scanf("%d", &marks[i]);
        // total += marks[i];
    }
    // printf("total %.2f", total);

    // total = mark1 + mark2 + mark3 + mark4 + mark5;
    // avg = total / 5;
    // prcnt = (total / 500) * 100;

    // printf("Total marks is: %f", total);
    // printf("The average of marks is : %f", avg);
    // printf("The percentage obtained is: %f", prcnt);
    for (int i = 0; i<5; i++){
        total += marks[i];
        avg = total / 5;
        prcnt = (total / 500)*100;
    }

    printf("The marks provided are %d, %d, %d, %d, %d\n Total: %f\n Average: %f\n Percentage: %f", marks[0],marks[1],marks[2],marks[3],marks[4], total, avg, prcnt);

    return 0;
}