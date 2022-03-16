#include <stdio.h>

int main(){
    int idNumber = 60124;
    int numberArray[6];
    int reversedNumberArray[6];
    int k = 0,l = 0, j;
    
    //for loop to print the digits of the number from 4
    for (int i = 5; i>0; i--){
        numberArray[k] = idNumber%10;
        k++;
        idNumber = idNumber/10;
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
            printf("@\t");
        }
        printf("\n");
    }

    printf("The program is created by student Maha Ali - Mechanical engineering- section F10 - ID = 60124 course code CS159, Spring 2022");
}