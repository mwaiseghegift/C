#include <stdio.h>
#include <stdlib.h>

int possible_times(int password_length){
    if(password_length<=1){
        return 1;
    }
    return password_length*possible_times(password_length-1);
}

int main(){
    printf("Enter the length of your password\n");
    int password_length;
    scanf("%d", &password_length);

    printf("\n\nThe possible length is %d", possible_times(password_length));
    return 0;
}
