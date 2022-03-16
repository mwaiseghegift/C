#include <stdio.h>

int main(){

    /*
    This program is created by
    1-      Maha Ali
    2-      60124
    3-      Spring 2022
    4-      F10
    5-      AUM – College of Engineering and Technology – Course CS 159
    6-      Mechanical Engineering
    */
   
    int idNumber = 60124;
    int numberArray[6];
    int reversedNumberArray[6];
    int k = 0,l = 0, j;
    
    //for loop to print each digit of the AUM student ID
    for (int i = 5; i>0; i--){
        numberArray[k] = idNumber%10;
        k++;
        idNumber = idNumber/10;
    }
    printf("\n");

    //reversed AUM student ID because the digits are in reverse from the previous loop
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


    int M=6;
    float employeeSalary[M], totalSalaryWithBonus, totalSalaryWithoutBonus;
    float averageSalaryWithBonus=0, averageSalaryWithoutBonus=0;

    //Prompts the user to enter the salary of N employees
    for (int i = 0; i < M; i++) {
        printf("Please enter the salary of employee %d: ", i+1);
        scanf("%.6f", &employeeSalary[i]);
    }

    //bonus is the percentage sum of all the digits of the AUM Student ID which is 60124
    float bonus = 0.13;

    printf("Salaries in the company\n");

    //Table to print company salaries
    printf("Employee\t\t Without bonus \t\t\t With Bonus\n");
    printf("--------------------------------------------------------------------------------\n");
    //for loop to print the salary table
    for (int i = 0; i < M; i++) {
        printf("Employee %d\t\t %.6f\t\t\t %.6f\n", i+1, employeeSalary[i], employeeSalary[i]*bonus);
        totalSalaryWithoutBonus += employeeSalary[i];
        totalSalaryWithBonus += employeeSalary[i]*bonus;
    }

    // Average salary without bonus
    averageSalaryWithoutBonus = totalSalaryWithoutBonus/M;
    printf("\nAverage salary without bonus: %.6f\n", averageSalaryWithoutBonus);

    // Average salary with bonus
    averageSalaryWithBonus = totalSalaryWithBonus/M;
    printf("Average salary with bonus: %.6f\n", averageSalaryWithBonus);

    //for loop to displays stars (row =6 and column = 8) horizontally centered
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}