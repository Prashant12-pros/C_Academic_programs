//16.	WAP that prints a table indicating the number of occurrences of each alphabet in the text entered as command line arguments.
#include <stdio.h>
#include <string.h>


int main(){
    char str[100];
    int count = 0, n;

    printf("Enter string: ");
    gets(str);

    //to get the length of string and store it in n.
    for (int i = 0; str[i] != '\0'; i++){
        n = i;
    }

    printf("The number of occurencs of each letter in the string entered: \n");
    //for recording the occurences
    for (int i =0; i < n; i++){
        count =1; 
        //check the string is not null
        if(str[i] != '\0'){

            //inner loop for cross checking rest of the letters with the one selected
            for (int j = i+1; j < n; j++){

                //check if any matches with rest of the letters
                if(str[i] == str[j]){
                    count++;
                    str [j] = '\0'; //this sets the duplicate element later in the loop to null.
                }

            }

            printf("%c : %d times\n", str[i], count);
        }
    }

    
    
    return 0;
}