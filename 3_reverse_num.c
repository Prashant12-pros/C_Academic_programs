#include <stdio.h>

int main(){
    int n, rev = 0, r;
    printf("Enter the number to be reversed:");
    scanf("%d",&n);

    //loop starts with rev as 0 and runs until the number entered returns 0 after getting divided by 10.
    while ( n != 0){
        r = n%10;           //retreiving the last digit
        rev = rev * 10 + r; //storing the reversed number, placing the last digit first ,i.e., highest place value
        n = n/10;           //making number equal to the leftover digits
    }

    printf("The reversed number is : %d",rev);
    return 0;
}