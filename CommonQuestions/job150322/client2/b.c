#include <stdio.h>

int main(){
    int M=6;
    float employeeSalary[M], totalSalaryWithBonus, totalSalaryWithoutBonus;
    float averageSalaryWithBonus=0, averageSalaryWithoutBonus=0;

    //Prompts the user to enter the salary of N employees
    for (int i = 0; i < M; i++) {
        printf("Please enter the salary of employee %d: ", i+1);
        scanf("%f", &employeeSalary[i]);
    }

    //bonus is the percentage sum of all the digits of the AUM Student ID which is 60124
    float bonus = 0.13;

    printf("Salaries in the company\n");

    //Table to print company salaries
    printf("Employee\t\t Without bonus \t\t\t With Bonus\n");
    printf("--------------------------------------------------------------------------------\n");
    //for loop to print the salary table
    for (int i = 0; i < M; i++) {
        printf("Employee %d\t\t %f\t\t\t %f\n", i+1, employeeSalary[i], employeeSalary[i]*bonus);
        totalSalaryWithoutBonus += employeeSalary[i];
        totalSalaryWithBonus += employeeSalary[i]*bonus;
    }

    // Average salary without bonus
    averageSalaryWithoutBonus = totalSalaryWithoutBonus/M;
    printf("\nAverage salary without bonus: %f\n", averageSalaryWithoutBonus);

    // Average salary with bonus
    averageSalaryWithBonus = totalSalaryWithBonus/M;
    printf("Average salary with bonus: %f\n", averageSalaryWithBonus);

    //for loop to displays stars (row =6 and column = 8) horizontally centered
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            printf("*\t");
        }
        printf("\n");
    }

}