#include <iostream>
#include <string> //include while using string
using namespace std;

//sample data types
int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number  Sufficient for storing 7 decimal digits
double myDoubleNum = 9.98;   // Floating point number Sufficient for storing 15 decimal digits
char myLetter = 'D';         // Character Stores a single character/letter/number, or ASCII values
bool myBoolean = true;       // Boolean Stores True or False
string myText = "Hello";     // String

int main(){
    float floatOne = 3E3;
    double doubleOne = 3E7;

    cout << floatOne<<endl<<doubleOne;
}