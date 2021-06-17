#include <stdio.h>

int main(){
    char ch;
    unsigned char un_ch;
    int i;
    unsigned int ui;
    float f;
    double db;
    long double ldb;

    //taking input from the user
    printf("Enter an unsigned character: ");
    un_ch = getchar();
    getchar();
    //scanf("%c", un_ch); -- scanf isn't working as assumed for both of the character inputs, instead working only for one
    printf("Enter a character: ");
    ch = getchar();
    getchar();
    //scanf("%c", ch);
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter an unsigned integer: ");
    scanf("%u", &ui);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a double: ");
    scanf("%lf", &db);
    printf("Enter a long double: ");
    scanf("%Lf", &ldb);

    //printing the inputs
    printf("\nCharacter: %c\n", ch);
    printf("Unsigned character: %c\n", un_ch);
    printf("Integer: %d\n", i);
    printf("Unsigned Integer: %u\n", ui);
    printf("Float: %f\n", f);
    printf("Doubel: %lf\n", db);
    printf("Long double: %Lf\n", ldb);
    return 0;
}