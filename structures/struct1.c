#include <stdio.h>
#include <stdlib.h>


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

    switch(enum){
        case(>5000):
           commission = (2.5/100)*sales;
           break;

        

        default:
            printf("Error! Please check your input");
        }

        printf("%d", commission);
        return EXIT_SUCCESS;
    }
