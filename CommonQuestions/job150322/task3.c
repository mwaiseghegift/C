#include <stdio.h>

int main(){
    printf("//////////////////////PART C /////////////////////\n");

    int number = 47305;
    int numberArray[6];
    int reversedNumberArray[6];
    int k = 0,l = 0, j;
    
    //for loop to print the digits of the number from 4
    for (int i = 5; i>0; i--){
        numberArray[k] = number%10;
        k++;
        number = number/10;
    }
    printf("\n");

    //numberArray reverse
    for (j = k - 1; j > -1; j--) {
        reversedNumberArray[l] = numberArray[j];
        l++;
    }

    //length of an newNumberArray
    int arrayLength = sizeof(reversedNumberArray)/sizeof(reversedNumberArray[0]);

    //pattern of the number according to the length of the number in reversedNumberArray
    for (int i = 0; i < arrayLength; i++) {
        for (int m = 0; m < reversedNumberArray[i]; m++) {
            printf("%d ", 47305);
        }
        printf("\n");
    }

    /* 
    Initializes two integers A and B with the first and second digits of your AUM ID, respectively. 
    If your ID is 47305, the value of A will be 4 and the value of B will be 7
    */
    int A = reversedNumberArray[0];
    int B = reversedNumberArray[1];
    int M;

    //if the value of A is 4 and the value of B is 7, the value of M will be 7
    if (A > B) {
        M = A;
    }
    else if (A < B) {
        M = B;
    }
    else  printf("Error");

    printf("The value of M is %d", M);

    //Using a while loop, prompt the user to enter the price of M number of chairs
    int NB_CHAIR = M;
    float chairPrice[M];

    // while loop to enter prices of M number of chairs

    int z=0, chairDiscount;
    while (z<M){
        printf("Enter the price of the chair #%d", z);
        scanf("%f", &chairPrice[z]);

        if (chairPrice[z]<1000){
            chairDiscount = 0.1;
            printf("Price of chair #%d after discount is %f", chairPrice[z]*chairDiscount);
        }
        else if (chairPrice[z]<=1000 | chairPrice[z]<=2000 ){
            chairDiscount = 0.15;
            printf("Price of chair #%d after discount is %f", chairPrice[z]*chairDiscount);
        }

        else if (chairPrice[z] > 2000){
            chairDiscount = 0.2;
            printf("Price of chair #%d after discount is %f", chairPrice[z]*chairDiscount);
        }
        else{
           printf("Error");
        }
        

        z++;
    }



}