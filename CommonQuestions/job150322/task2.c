#include <stdio.h>

int main(){
    printf("//////////////////////PART B /////////////////////\n");

    int NB_LAPTOP = 10;
    float laptopPrice[NB_LAPTOP];
    printf("Please enter the price of 4 laptops: ");

    //get laptopPrice inputs
    scanf("%f %f %f %f %f %f %f %f %f %f", &laptopPrice[0], &laptopPrice[1], &laptopPrice[2], &laptopPrice[3], &laptopPrice[4], &laptopPrice[5], &laptopPrice[6], &laptopPrice[7], &laptopPrice[8], &laptopPrice[9] );

     printf("Part B is created by student Maha Ali - Course CS159 - Spring 2022 - ID = 60124");
     
    //discount price from ID 6+0+1+2+4
    float discount = 0.13;

    printf("Item    \t\t Original Price\t\t Price with Discount\n");
    printf("-----   \t\t---------------\t\t--------------------------\n");
    printf("Laptop  1\t\t %.2f\t\t %.2f\n", laptopPrice[0], laptopPrice[0] - laptopPrice[0] * discount);
    printf("Laptop  2\t\t %.2f\t\t %.2f\n", laptopPrice[1], laptopPrice[1] - laptopPrice[1] * discount);
    printf("Laptop  3\t\t %.2f\t\t %.2f\n", laptopPrice[2], laptopPrice[2] - laptopPrice[2] * discount);
    printf("Laptop  4\t\t %.2f\t\t %.2f\n", laptopPrice[3], laptopPrice[3] - laptopPrice[3] * discount);
    printf("Laptop  5\t\t %.2f\t\t %.2f\n", laptopPrice[4], laptopPrice[4] - laptopPrice[4] * discount);
    printf("Laptop  6\t\t %.2f\t\t %.2f\n", laptopPrice[5], laptopPrice[5] - laptopPrice[5] * discount);
    printf("Laptop  7\t\t %.2f\t\t %.2f\n", laptopPrice[6], laptopPrice[6] - laptopPrice[6] * discount);
    printf("Laptop  8\t\t %.2f\t\t %.2f\n", laptopPrice[7], laptopPrice[7] - laptopPrice[7] * discount);
    printf("Laptop  9\t\t %.2f\t\t %.2f\n", laptopPrice[8], laptopPrice[8] - laptopPrice[8] * discount);
    printf("Laptop 10\t\t %.2f\t\t %.2f\n", laptopPrice[9], laptopPrice[9] - laptopPrice[9] * discount);



}