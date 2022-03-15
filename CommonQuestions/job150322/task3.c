#include <stdio.h>

int main(){
    printf("//////////////////////PART C /////////////////////\n");

    int number = 60124;
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

    //reversed number array
    for (j = k - 1; j > -1; j--) {
        reversedNumberArray[l] = numberArray[j];
        l++;
    }

    //length of an reversedNumberArray
    int arrayLength = sizeof(reversedNumberArray)/sizeof(reversedNumberArray[0]);

    //pattern of the number according to the length of the number in reversedNumberArray
    for (int i = 0; i < arrayLength; i++) {
        for (int m = 0; m < reversedNumberArray[i]; m++) {
            printf("%d ", 60124);
        }
        printf("\n");
    }


   // Initialization of A and B 
    int A = reversedNumberArray[0];
    int B = reversedNumberArray[1];
    int M;

    //Determining which value is greater than the other
    if (A > B) {
        M = A;
    }
    else if (A < B) {
        M = B;
    }
    else  printf("Error");

    printf("The value of M is %d\n", M);

    //Using a while loop, prompt the user to enter the price of M number of chairs
    int noOfChairs = M;
    float chairPrice[M];

    // while loop to enter prices of M number of chairs

    int z=0;
    float chairDiscount, afterDiscount, totalPrice=0;

    while (z<M){
        printf("Enter the price of the chair #%d: ", z+1);
        scanf("%f", &chairPrice[z]);

        if (chairPrice[z]<1000){
            chairDiscount = 0.1;
            afterDiscount = chairPrice[z]-(chairPrice[z]*chairDiscount);
            printf("Price of chair #%d after discount is %.3f\n", z+1, afterDiscount);
        }
        else if (chairPrice[z]<=1000 | chairPrice[z]<=2000 ){
            chairDiscount = 0.15;
            afterDiscount = chairPrice[z]-(chairPrice[z]*chairDiscount);
            printf("Price of chair #%d after discount is %.3f\n", z+1, afterDiscount);
        }

        else if (chairPrice[z] > 2000){
            chairDiscount = 0.2;
            afterDiscount = chairPrice[z]-(chairPrice[z]*chairDiscount);
            printf("Price of chair #%d after discount is %.3f\n", z+1, afterDiscount);
        }
        else{
           printf("Error");
        }

        z++;
        totalPrice = totalPrice+afterDiscount;
    }
    printf("Total price after discount of all chairs which got a discount of 10 is %.3f\n", totalPrice);
}