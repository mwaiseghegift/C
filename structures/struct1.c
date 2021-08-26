#include <stdio.h>
#include <stdlib.h>

enum Cases {
    first = >5000;
    second = >=4000<5000;
    third = >=3000<4000;
    fourth = >=2000<3000;
    fifth = >=1000<2000;
    sixth = <1000;
}

int main(){

    int sales, commission;

    printf("Enter the amout \n");

    scanf("%d", &sales);

    switch(enum){
        case(>5000):
           commission = (2.5/100)*sales;
           break;

        case (>=4000<5000):
            commission= (2/100)*sales;
            break;


        case (>=3000<3999):
            commission = (1.5/100)*sales;
            break;

        case (>=2000<3000):
            commission = (1/100)*sales;
            break;

        case (>=1000<2000):
            commission = (0.5/100)*sales;
            break;

        case(<1000):
            commission = 0;
            break;

        default:
            printf("Error! Please check your input");
        }

        printf("%d", commission);
        return EXIT_SUCCESS;
    }
