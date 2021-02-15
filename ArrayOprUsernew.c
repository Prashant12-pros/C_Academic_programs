/*Q. WAP to perform following actions on an array entered by the user:
1. Print even valued elements.
2. Print odd valued elements.
3. Calculate nad print the sum and average of the elements of the array.
4. Print maximum and minimum element of the array.
5. Remove duplicates from the array.
6.Print the array in the reverse order.
The program should also present a menu to the user and for one of the options.
The meni should also include options to re-enter and to quit the program. */


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(){
    int size, n;
    int max, min;
    int sum;
    float avg;
    char option = 'y'; //initialized to 'y' so as to run the while loop.
    

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d/n", &arr[i]);
    }

    printf("The array entered is : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    //printf("\nChoose option \n1. Print even and odd elements \n2. Print sum and average \n3. Print minimum and maximum \n4. Remove duplicates \n5. Print reverse of array \n6. Re-enter array \n7. Quit\n");
   
    while (option == 'y'){
    printf("\n----MENU----\n");
    printf("Choose from below options:\n");
    printf("1. Print even and odd values.\n");
    printf("2. Print sum and average of elements.\n");
    printf("3. Print maximum and minimum.\n");
    printf("4. Remove duplicates.\n");
    printf("5. Print reverse of array.\n");
    printf("6. Re-enter array\n");
    printf("7. Quit\n");

    printf("Enter your option: ");
    scanf("%d", &n);


    /*if option choosen for printing even ad odd elements*/
    if (n == 1){
        printf("The even elements of array are: ");
        for (int k = 0; k<size; k++){
            if (arr[k] % 2 == 0){
                printf("%d ", arr[k]);
            }
        }

        printf("The odd elements of array are: ");
        for (int l = 0; l < size; l++){
            if(arr[l] % 2 != 0){
                printf("%d ", arr[l]);
            }
        }
    }

    //sum and average of array
    else if(n == 2){
        sum = 0;
        avg = 0;
        for (int i = 0; i < size; i++){
        sum += arr[i];
        }
        printf("The sum of all the elements in array is: %d\n", sum);

        avg = sum / size;

        printf("The average of all the elements in array is: %.2f\n", avg);
    }

    //max and min of array
    else if(n == 3){
        min = arr[0];
        max= arr[0];
        printf("%d\n", max);
        for (int j = 1; j < size; j++){
            if(arr[j] > max){
                max = arr[j];
            }
            if(arr[j] < min){
                min = arr[j];
            }
        }

        printf("Maximum: %d\n", max);
        printf("Minimum: %d\n", min);
    }

    //removing duplicates
    else if(n == 4){
         printf("New array is: ");//Displayin the new array after removing duplicate items
    
        //Calculating the duplicate items and deleting those elements
        for(int i = 0; i < size; i++)
        {
            for(int j = i+1; j < size; )
            {
                if(arr[j] == arr[i])
                {
                    for(int k = j; k < size; k++)
                    {
                        arr[k] = arr[k+1];
                    }
                    size--;
                }
                else
                {
                    j++;
                }
            }
        }

        for(int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);//Displaying elements
        }
    }

    //reversing array
    else if(n == 5){
        printf("Reversed array: \n");
        for (int i = size-1; i >= 0; i--){
            printf("%d ", arr[i]);
        }
    }

    //re-entering array
    else if(n == 6){
        printf("Re-enter your array:\n");
        printf("Enter the size of array: ");
        scanf("%d", &size);

        int arr[size];

        printf("Enter %d element: ", size);
        for(int i = 0; i < size; i++){
            scanf("%d/n", &arr[i]);
        }

        printf("The array entered is : ");
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
    }

    //exiting the program
    else if(n == 7){
        printf("Exiting program..");
        exit(0);
    }

    printf("Want to re-run the program? (y/n): ");
    option = getch();
       
}

    
    return 0;
}
