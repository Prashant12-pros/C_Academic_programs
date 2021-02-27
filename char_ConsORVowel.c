#include <stdio.h>

int main(){
    char alphabet[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char a;

    printf("Enter a character: \n");
    scanf("%c", &a);

    if(a == alphabet[0] || a == alphabet[4] || a == alphabet[8] || a == alphabet[14] || a == alphabet[20]){
        printf("The letter entered is a vowel!");
    }
    else{
        printf("The letter entered is a consonant!");
    }
    return 0;
}