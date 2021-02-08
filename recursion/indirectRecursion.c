#include <stdio.h>
#include <stdlib.h>


//indirect recursion
void odd();
void even();
int n=1;

void odd(){
    if(n<=10){
        printf("%d ", n+1);
        n++;
        //here odd function is transfered to even function
        even();
    }
    return;
    }

void even(){
    if(n<=10){
            printf("%d ", n-1);
            n++;
            odd();
    }
    return;
}

int main(){
    odd();
}
