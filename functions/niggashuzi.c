#include <stdio.h>
#define taxRate 10/100;

int netPay(int grossPay){
    return grossPay*taxRate;
}

int main(){
    int gross;
    printf("Enter gross pay to calculate your net pay\n");
    scanf("%d", &gross);
    printf("Netpay is: %d", netPay(gross));
    return 0;
}
