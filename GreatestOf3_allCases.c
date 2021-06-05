#include <stdio.h>

int main(){
    int a,b,c, max = 0; //here, max keeps track of the greatest number
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    //case when all numbers or some of them are equal
    if ((a == b || b == c) || a == c){
        
        //case when all numbers are equal
        if((a == b) && (b == c)){
            printf("All are equal!\n");
            max = a;
        }

        //cases below when any two of the numbers are equal along with the maximum number
        else if (a == b){
            printf("1st & 2nd numbers are equal!\n");
            max = a > c ? a : c;
        }
        else if (b == c){
            printf("2nd and 3rd numbers are equal\n");
            max = b > a ? b : a; 
        }
        else{
            printf("1st and 3rd numbers are equal\n");
            max = a > b ? a : b;
        }
    }

    //cases when any single number is greater
    else if (a > b){
        max = a > c ? a : c;
    }

    else if (a < b){
        max = b > c ? b : c;
    }

    //this case may not be executed as long as you tend to enter a valid integer 
    //or any character is converted into integer
    else{
        printf("Invalid!");
    }

    printf("%d is greatest", max);

    return 0;
}