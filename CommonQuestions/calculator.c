#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1,num2;
    char sign;
    float results;


    printf("Calculate\n");
    scanf("%d\n%c\n%d", &num1, &sign, &num2);

        switch(sign){
            case '+':
                results = num1+num2;
                printf("%2lf",results);
                break;

            case '-':
                results = num1-num2;
                printf("%2lf",results);
                break;

            case '/':
                results = num1/num2;
                printf("%2lf",results);
                break;

            case '*':
                results = num1*num2;
                printf("%2lf",results);
                break;

            default:
                printf("oops!! Something was wrong, check your input");

        }
    return results;
}


/* syntax of switch case

   case constant-expression  :
      statement(s);
      break; // optional
	
   case constant-expression  :
      statement(s);
      break; // optional
  
   // you can have any number of case statements
   default : // Optional
   statement(s);
}

*/
