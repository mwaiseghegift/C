#include <iostream>
using namespace std;


/*
syntax

switch(expression){
    case 1:
        statements
        break;
    case 2:
        statements
        break;
    default:
        statements
}

*/
int main(){
    int luckyNumber;

    cout<<"Enter Your Lucky Number\n";
    cin>>luckyNumber;

    switch(luckyNumber){
        case 1:
            cout<<"please try again\n";
            break;
        case 2:
            cout << "Please try again\n";
            break;
        case 3:
            cout << "Please try again\n";
            break;
        case 4:
            cout<< "You are the lucky winner\n";
        case 5:
            cout<< "Please try again\n";
            break;
        default:
            cout<<"You made an Error, please try again\n";

    }

}
