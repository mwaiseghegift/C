#include <stdio.h>

int main() {
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

    printf("Part A is created by student Maha Ali - Course CS159 - Spring 2022 - ID = 60124");

    average = sum/count;
    printf("The Average rank of male empoyees: %.1f", average);


    return 0;
    }