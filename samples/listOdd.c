    #include <stdio.h>
    #include <stdlib.h>


    //lists all odd numbers from 0 to 100
    int main(){

    int number=0;
    int average;
    int i;

    for(i=1; i<100; i=i+2){
        number=number+1;
        printf("%d - %d\n",number, i);
    }

    }