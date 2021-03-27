#include <iostream>
using namespace std;

int main(){
    for (int i=0; i<=10; i++){
        if (i==10){
            continue;
        }
        cout <<i<< endl; //prints 0,1,2,3,4,6,7,8,9,10
    }
}