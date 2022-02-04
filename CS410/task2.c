
/*
    CS 410 Operating Systems
    Lastname Firstname
    Lab 01
*/
#include <stdio.h>

int main(){
    char continueOption;
    int m, n, c, k;
        
    m = 0b10101;
    printf("the binary 10101 in decimal is: %i \n", m);

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

        printf("Do you wish to continue? Y/N: ");
        scanf(" %c", &continueOption);

        if (continueOption == 'Y'|| continueOption == 'y')
            continue;
        else if (continueOption == 'N'|| continueOption == 'n')
            break;

        else {
            printf("Enter a valid input");
            break;
        }

    }
        

    return 0; 
}

/*

printf("Do you wish to continue? Y/N:" );
        scanf("%c", &continueOption);

        if (continueOption == 'Y')
            continue;
        else
            break;

            A simple fix is to replace the second scanf() with scanf(" %c", &choice1). 
            The blank in the format string eats up white space, including newlines, 
            and reads the first non-blank character. Of course, it too leaves a newline behind.

*/
