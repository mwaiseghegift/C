#include <stdio.h>

int main() {
    printf("//////////////////////PART A /////////////////////\n");

    int NB = 3;
    float rank, rankAverage, rankTotal=0; 
    char gender;
    int employeeCount=0;

    printf("Enter the rank and the gender (M or F) of %d employees\n", NB);

    // while loop to enter data into an array
    
    while (NB>0){
        scanf("%f %c", &rank, &gender );
        if (gender == 'M'){
            rankTotal = rankTotal + rank;
            employeeCount = employeeCount+1;
        }
        NB=NB-1;
    }

    printf("Part A is created by student Maha Ali - Course CS159 - Spring 2022 - ID = 60124\n");

    rankAverage = rankTotal/employeeCount;
    printf("The average rank of male empoyees: %.1f", rankAverage);


    return 0;
    }