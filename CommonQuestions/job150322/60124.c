#include <stdio.h>

/*
This program is created by
a -     Student Name= Maha Faisal Ali
b -     Id= 60124
c -     Section= F10
d -     Course Code= CS159
*/


int main() {
    //Part A
    printf("//////////////////////PART A /////////////////////\n");

    int NB = 6;
    float rank, average, sum=0; 
    char gender;
    int count=0;

    printf("Enter the rank and the gender (M or F) of %d employees\n", NB);

    // while loop to enter data into an array
    
    while (NB>0){
        scanf("%f %c", &rank, &gender );
        if (gender == 'M'){
            sum = sum + rank;
            count = count+1;
        }
        NB=NB-1;
    }

    printf("Part A is created by student Maha Ali - Course CS159 - Spring 2022 - ID = 60124\n");

    average = sum/count;
    printf("The Average rank of male empoyees: %.1f\n", average);


    printf("//////////////////////PART B /////////////////////\n");


    int NB_LAPTOP = 6;
    float laptopPrice[NB_LAPTOP];
    printf("Please enter the price of %d laptops: ", NB_LAPTOP);

    //get laptopPrice inputs
    scanf("%f %f %f %f %f %f", &laptopPrice[0], &laptopPrice[1], &laptopPrice[2], &laptopPrice[3], &laptopPrice[4], &laptopPrice[5]);

    printf("Part B is created by student Maha Ali - Course CS159 - Spring 2022 - ID = 60124");
     
    //discount price from ID 6+0+1+2+4
    float discount = 0.13;
    float totalWithoutDiscount=0, totalWithDiscount=0;

    printf("Item    \t\t Original Price\t\t Price with Discount\n");
    printf("-----   \t\t---------------\t\t--------------------------\n");
   
    for (int i = 0; i < NB_LAPTOP; i++) {
         printf("Laptop-%d\t\t %.2f\t\t %.2f\n", i+1, laptopPrice[i], laptopPrice[i] - laptopPrice[i] * discount);
        totalWithoutDiscount = totalWithoutDiscount + laptopPrice[i];
        totalWithDiscount = totalWithDiscount + laptopPrice[i] - laptopPrice[i] * discount;
    }
    printf("Total before discount: %.2f\n", totalWithoutDiscount);
    printf("Total with discount: %.2f\n", totalWithDiscount);

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

    printf("Fun1_F10_60124 is created by student ID = 60124 section F10\n");


    // commented the code because it is misbehaving on initialization of A
   // Initialization of A and B 
   /*
    int A = reversedNumberArray[0];
    int B = reversedNumberArray[1];

    //Determining which value is greater than the other
    if (A > B) {
        M = A;
    }
    else if (A < B) {
        M = B;
    }
    else  printf("Error");
    printf("The value of M is %d\n", M);

    */


    int M = 6;

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
        //get total price of chairs after discount
        totalPrice = totalPrice+afterDiscount;
    }
    printf("Total price after discount of all chairs which got a discount of 10%% is %.3f\n", totalPrice);

    return 0;
    }