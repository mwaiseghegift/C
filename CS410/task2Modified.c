
/*
    CS 410 Operating Systems
    Swetha
    Lab 01
*/
#include <stdio.h>

void decimalToBinaryConverter(){
    int m, n, c, k;
    char choice;
    for (;;){
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

        printf("Do you wish to convert another decimal to binary? Y/N: ");
        scanf(" %c", &choice);

        if (choice == 'Y'|| choice == 'y')
            continue;
        else if (choice == 'N'|| choice == 'n')
            break;

        else {
            printf("Enter a valid choice: (Y/y for Yes, N/n for No");
            break;
        }

    }
}

int main(){
    char choice;
    int m, n, c, k;
        
    m = 0b10101;
    printf("the binary 10101 in decimal is: %i \n", m);

    decimalToBinaryConverter();
    return 0; 
}


