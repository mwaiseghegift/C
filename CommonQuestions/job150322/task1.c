#include <stdio.h>

int main() {
    printf("//////////////////////PART A /////////////////////\n");

    int NB = 6;
    int rank, average; 
    char gender;
    int sum=0, count=0;

    printf("Enter the rank and the gender (M or F) of %d employees\n", NB);

    // while loop to enter data into an array
    
    while (NB>0){
        scanf("%d %c", &rank, &gender );
        if (gender == 'M'){
            sum = sum + rank;
            count = count+1;
        }
        NB=NB-1;
        printf("%d\n", NB);
    }

    printf("Part A is created by student yyy xxx- section F6 - ID =47305");

    average = sum/count;
    printf("The Average rank of male empoyees: %d", average);


    return 0;
    }