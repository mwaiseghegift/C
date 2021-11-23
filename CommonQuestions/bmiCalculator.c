#include <stdio.h>
int main(){
    float BMI;
    printf("Enter the BMI value: ");
    scanf("%float", &BMI);
    if (BMI<18.5){
        printf("\nUnderweight");
    }
    else if(BMI>=18.5 && BMI<24.9){
        printf("\nHealthy");
    }
    else if(BMI>=25.0 && BMI<=29.9){
        printf("\nOverweight");
    }
    else{
        printf("\nObese");
    }
    return 0;
}