#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num1, num2, results;
    char numOperator;

    cout << "Enter Num1" << endl;
    cin>>num1;
    cout<<"Enter the operator"<<endl;
    cin>>numOperator;
    cout << "Enter Num2"<<endl;
    cin>>num2;


    switch(numOperator){
        case '+':
            results = num1+num2;
            break;

        case '-':
            results = num1-num2;
            break;

        case '*':
            results = num1*num2;
            break;

        case '/':
            results = num1/num2;
            break;

        //for caculating modulus
        case '%':
            results = fmod(num1,num2);
            break;

        default:
            cout<<"Ooops, there was an error, please try again";

    }
    cout<<results;
    return 0;
}
