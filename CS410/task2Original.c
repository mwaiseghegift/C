
/*
    CS 410 Operating Systems
    Swetha
    Lab 01
*/
#include <stdio.h>

int main(){
    int m, n, c, k;
        
    m = 0b10101;
    printf("the binary 10101 in decimal is: %i \n", m);


    printf("Enter an integer in decimal number system\n");
    scanf("%d", &n); 

    printf("%d in binary number system is: \n", n);

    for (c = 31; c >=0; c-- ) 
    {
        k = n >> c;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0; 
}