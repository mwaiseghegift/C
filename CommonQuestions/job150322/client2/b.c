#include <stdio.h>

int main(){
    int M=6;
    int employeeSalary[M];

    //Prompts the user to enter the salary of N employees
    for (int i = 0; i < M; i++) {
        printf("Enter the salary of employee %d: ", i+1);
        scanf("%d", &employeeSalary[i]);
    }


}