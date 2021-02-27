/*simplifying the array operation program using functions and testing*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//declaring functions above the main function...
void evenodd(int arr[], int n);
void sumavg(int arr[], unsigned int n);
void maxmin(int arr[], unsigned int n);
void removeduplicate(int arr[], unsigned int n);
void arrayrev(int arr[], unsigned int n);

/*previously, if-else if- else method wasused to gperform operations by the input of user. Here, do-while is a better approach for the same program*/
int main(){

    //declaring variable universally
    int size;
    char replay;
    int n;
    

    printf("Enter the size of array: ");
    scanf("%d\n", &size);

    int arr[size];

    printf("Enter %d array elements: \n", size);
    for (int i = 0; i < size; i++){
        scanf("%d\n", &arr[i]);
    }

    //unsigned int f = sizeof(arr)/sizeof(arr[0]);

    do
    {
        
        
        //printing the menu for user to choose from.

        printf("_____MENU_____\n");
        printf("Choose an option from below!\n");
        printf("1. Print even and odd values.\n");
        printf("2. Print sum and average of elements.\n");
        printf("3. Print maximum and minimum.\n");
        printf("4. Remove duplicates.\n");
        printf("5. Print reverse of array.\n");
        printf("6. Re-enter array\n");
        printf("7. Quit\n");

        printf("Enter your option: ");
        scanf("%d\n", &n);

        if (n == 1){
            evenodd(arr, size);
        }

        // switch(n)
        // {
        // case 1:
        //     evenodd(arr, size);
        //     break;

        // case 2:
        //     sumavg(arr, size);
        //     break;

        // case 3:
        //     maxmin(arr, size);
        //     break;

        // case 4:
        //     removeduplicate(arr, size);
        //     break;

        // case 5:
        //     arrayrev(arr, size);
        //     break;

        // case 6:
        //     printf("Enter the size of array: ");
        //     scanf("%d\n", &size);

        //     // int arr[size];

        //     printf("Enter %d array elements: \n", size);
        //     for (int i = 0; i < size; i++){
        //         scanf("%d\n", &arr[i]);
        //     }

        //     //unsigned int f = sizeof(arr)/sizeof(arr[0]);
        //     break;

        // case 7:
        //     exit(1);

        // default:
        //     printf("Invalid option!");
        //     break;
        // }

        printf("Want to re run the program? (y/n): ");
        scanf("%c", &replay);


    } while (replay == 'y' || replay == 'Y');
    //do-while loop continues while replay is equal to y
    
    
    return 0;
}

//now, defining all the functions declared above.


//function defining for even and odd elelmts of the array.
void evenodd(int arr[], int n){
    printf("Even numbers of the array: ");
    for (int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }

    printf("Odd numbers of the array: ");
    for (int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            printf("%d, ", arr[i]);
        }
    }
        
    
}

//function defining for sum and average of the elements of the array.
void sumavg(int arr[], unsigned int n){
    int sum = 0;
    float avg = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    avg  = sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
}

//function defining for maximum and minimum elements of the array.
void maxmin(int arr[], unsigned int n){
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i <  n; i++){
        if ( arr[i] > max){
            max = arr[i];
        }

        if( arr[i] < min){
            min = arr[i];
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

//function defining for removing the duplicate elements from the array.
void removeduplicate(int arr[], unsigned int n){

    
    //this loop is the main loop which goes from 0 to the whole length of array.
    for (int i = 0; i < n; i++){ 

        // this loop checks for the duplicate elements and runs from 1 more than the previous 'i'.
        for (int j = i+1; j < n;){ 

            //if condition for checking if any element matches the current element 
            if(arr[j] == arr[i]){
                
                //if matched, for loop runs to delete the last duplicate element by replacing it by its succeeding element.
                for(int k = j; k < n; k++){ 
                    arr[k] = arr[k+1];
                }

                n--;//size is decremented by one after assigning.
            }
            //else, if the condition is not true... increment j by 1 in the for loop.
            else{
                j++;
            }
               
           
        }
    }

    //now, printing the modified list.
    printf("The marray after deleting duplicates: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    } 
}

//function defining for reversing the array.
void arrayrev(int arr[], unsigned int n){
    printf("Array after being reversed: \n");
    for(int i = n; i < 0; i--){
        printf("%d ", arr[i]);
    }
}