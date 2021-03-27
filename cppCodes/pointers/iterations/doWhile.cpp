#include <iostream>
using namespace std;

/*
    syntax

    do {
        statements
    }while(condition);
*/

int main(){
    int i = 0;

    do {
        cout << i<<endl;
        i ++;
    }while(i<=10);
}