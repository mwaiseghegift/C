#include <stdio.h>
#include <stdlib.h>

int return_max(int num1, int num2){
    int results;
    if (num1>num2){
        results=num1;}
    else
        results = num2;
    return results;
    }

int main(){
    int a = 1000;
    int b = 2000;
    int thee_function;

    thee_function = return_max(a,b);

    printf("The max value = %d", thee_function);
    return 0;
}
