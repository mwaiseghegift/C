#include <stdio.h>
#include <stdlib.h>

//function to convert the sales to contants for switch statement

int categoryOutcome(sales){
    if(sales < 1000){
        return 0;
    }
    else if(sales >= 1000 && sales < 2000){
        return 1;
    }
    else if(sales >= 2000 && sales < 3000){
        return 2;
    }
    else if(sales >= 3000 && sales < 4000){
        return 3;
    }
    else if(sales >= 4000 && sales < 5000){
        return 4;
    }
}
   

int main(){

    int sales, commission;

    printf("Enter the amout \n");
    scanf("%d", &sales);

    int catOutcome = categoryOutcome(sales);

    switch(catOutcome){
        case 0:
            commission = sales * 0.05;
            break;
        case 1:
            commission = sales * 0.10;
            break;
        case 2:
            commission = sales * 0.15;
            break;
        case 3:
            commission = sales * 0.20;
            break;
        case 4:
            commission = sales * 0.25;
            break;

        default:
            printf("Error! Please check your input");
        }

        printf("%d", commission);
        return EXIT_SUCCESS;
    }
