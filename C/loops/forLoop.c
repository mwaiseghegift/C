#include <stdio.h>
#include <stdlib.h>


//lists all even numbers from 0 to 100
int main(){

int number;
int even_num=2;


printf("Even numbers from 0-100 are\n");
for(number=0; number<=100; number=number+even_num){
    printf("%d\n", number);
}
return 0;
}
