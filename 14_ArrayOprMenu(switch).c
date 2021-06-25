/*Q 14.      WAP to perform following actions on an array entered by the user:
1. Print even valued elements.
2. Print odd valued elements.
3. Calculate nad print the sum and average of the elements of the array.
4. Print maximum and minimum element of the array.
5. Remove duplicates from the array.
6.Print the array in the reverse order.
The program should also present a menu to the user and for one of the options.
The menu should also include options to re-enter and to quit the program. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n, option, sum = 0, max, min;
    int flag =1;
    float average;
    
    printf("Enter the sie of the array: ");
    scanf("%d", &n);
    
    int* ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the values: ");
    
    for(int i = 0; i < n; i++){
        scanf("%d", ptr + i);
    }
    printf("Values entered: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }
    
    do{
        printf("\n1. even odd\n");
        printf("2. sum and average:\n");
        printf("3. max and min:\n");
        printf("4. remove duplicates:\n");
        printf("5. Reverse array: \n");
        printf("6. Re-enter array:\n");
        printf("7. Exit: \n");
        printf("Option: ");
        scanf("%d", &option);
        
        switch(option){
            case 1 : 
                    printf("\nEvens:\t");
                    for(int i = 0; i < n; i++){
                        if(*(ptr+i) % 2 == 0){
                            printf("%d ", *(ptr+i));
                        }
                    }
                    printf("\nOdds:\t");
                    for(int i = 0; i < n; i++){
                        if(*(ptr+i) % 2 != 0){
                            printf("%d ", *(ptr+i));
                        }
                    }
                    break;
            case 2 : 
                    for(int i = 0; i < n; i++){
                        sum += *(ptr+i);
                        average = sum / n;
                    }
                    printf("sum : %d\n", sum);
                    printf("average: %.2f\n", average);
                    break;
            case 3 :
                    min = *ptr; max = *ptr;
                    for(int i = 0; i < n; i++){
                        if(min > *(ptr+i))
                            min = *(ptr+i);
                        if(max < *(ptr+i))
                            max = *(ptr+i);
                    }
                    printf("\nMaximum: %d\n", max);
                    printf("Minimum: %d\n", min);
                    break;
            case 4 :
                    for(int i = 0; i < n; i++){
                        for(int j = i+1; j < n; ){

                            if(*(ptr+j) == *(ptr+i)){
                                for(int k = j; k < n; k++){
                                    *(ptr+k) = *(ptr+k+1);
                                }

                                n--;
                            }
                            else
                                j++;
                        }
                    }
                    printf("Array without duplicates: ");
                    for(int i = 0; i < n; i++){
                        printf("%d ", *(ptr + i));
                    }
                    break;
            case 5 :
                    for(int i = n-1; i >= 0; i--){
                        printf("%d ", *(ptr + i));
                    }
                    break;
            case 6 :
                    printf("Re-enter array of size %d", n);
                    for(int i = 0; i < n; i++){
                        scanf("%d", ptr+i);
                    }
                    break;
            case 7 :
                    exit(0);
            default: 
                    printf("Invalid input! \n");
                    break;
        }
        printf("\nRe-run program? (1/0): ");
        scanf("%d", &flag);
        
        // flag = tolower(flag);
        
    }while(flag);
    
    
    return 0;
}
