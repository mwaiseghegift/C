#include <stdio.h>
#define taxRate 10/100;


int main(){
    int taxCharged, grossPay, netPay;
    printf("Enter gross pay to calculate your net pay\n");
    scanf("%d", &grossPay);

    taxCharged = grossPay*taxRate;
    netPay = grossPay-taxCharged;

    printf("Netpay is: %d", netPay);
    return 0;
}
