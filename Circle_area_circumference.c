#include <stdio.h>
#include <math.h>
#define PI 3.14 //defined pi as constant value of 3.14

/*function to calc the area of circle and getting it radius as argument*/
float area(float r){
    float ar = PI * pow(r, 2);
    return ar;
}

/*function to calc the circumference of circle and getting it radius as argument*/
float circumference(float r){
    float circum = 2 *PI *r;
    return circum;
}

int main(){
    float r;
    printf("Area and circumference of the circle:\n");
    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    float ar = area(r); //assigning the area fucntion return value to ar
    float circum = circumference(r); //assigning the circumference fucntion return value to circum

    printf("The area of circle is: %.2f\n", ar);
    printf("The circumeference of circle is: %.2f\n", circum);

    return 0;
}