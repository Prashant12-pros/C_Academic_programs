#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main(){
    int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE], transpose[SIZE][SIZE];
    int r1, c1, r2, c2;
    int option, flag = 1, sum = 0;

    printf("Enter the rows and columns size for matrix1:\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter values: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the rows and columns size for matrix2:\n");
    scanf("%d %d", &r2, &c2);
    if(c1 == r2){
        printf("Enter values: \n");
        for(int i = 0; i < r2; i++){
            for(int j = 0; j < c2; j++){
                scanf("%d",&b[i][j]);
            }
            printf("\n");
        }
    
        do{
            printf("\n\t\t\tMENU\n");
            printf("\t\t1. Add matrices: \n");
            printf("\t\t2. Subtract matrices: \n");
            printf("\t\t3. Multiplication\n");
            printf("\t\t4. Transpose\n");
            printf("\t\tOption: ");
            scanf("%d", &option);

            switch(option){
                case 1 :
                        for(int i = 0; i < r1; i++){
                            for(int j = 0; j < c1; j++){
                                result[i][j] = a[i][j] + b[i][j];
                            }
                        }
                        printf("\nSum of matrices: \n");
                        for(int i = 0; i < r1; i++){
                            for(int j = 0; j < c1; j++){
                                printf("%d ",result[i][j]);
                            }
                            printf("\n");
                        }break;

                case 2 : 
                        for(int i = 0; i < r1; i++){
                            for(int j = 0; j < c1; j++){
                                result[i][j] = a[i][j] - b[i][j];
                            }
                        }
                        printf("\nDifference of matrices: \n");
                        for(int i = 0; i < r1; i++){
                            for(int j = 0; j < c1; j++){
                                printf("%d ",result[i][j]);
                            }
                            printf("\n");
                        }break;

                case 3 :
                        if(c1 == r2){
                            for(int i = 0; i < r1; i++){
                                for(int j = 0; j < c2; j++){
                                    for(int k = 0; k < r2; k++){
                                        sum += a[i][k] * b[k][j];
                                    }
                                    result[i][j] = sum;
                                    sum = 0;
                                }
                            }

                            printf("\nResultant matrix:\n");
                            for(int i = 0; i < r1; i++){
                                for(int j = 0; j < c2; j++){
                                    printf("%d ", result[i][j]);
                                }
                                printf("\n");
                            }
                        }
                        else{
                            printf("\nColumn of first matrix must be equal to row of 2nd matrix. \n");
                        }
                        break;

                case 4 : 
                        printf("\nTranspose of matrices: ");
                        for(int i = 0; i < c1; i++){
                            for(int j = 0; j < r1; j++){
                                transpose[i][j] = a[j][i];
                            }
                        }
                        printf("\nTranspose of matrix 1: \n");
                        for(int i = 0; i < c1; i++){
                            for(int j = 0; j < r1; j++){
                                printf("%d ", transpose[i][j]);
                            }
                            printf("\n");
                        }

                        for(int i = 0; i < c2; i++){
                            for(int j = 0; j < r2; j++){
                                transpose[i][j] = b[j][i];
                            }
                        }
                        printf("\nTranspose of matrix 2: \n");
                        for(int i = 0; i < c2; i++){
                            for(int j = 0; j < r2; j++){
                                printf("%d ", transpose[i][j]);
                            }
                            printf("\n");
                        }break;

                default: 
                        printf("\nInvalid\n"); break;
            }
            printf("Want to re-run? (1 for yes / 2 for no) : ");
            scanf("%d", &flag);
        }while(flag);
    }

    else{
        printf("\nNumber of rows and columns is not valid for mathematical operation.");
    }
    return 0;
}