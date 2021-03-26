#include <iostream>
using namespace std;

/*

    Constants
    we use the const keyword
    this will declare the variable as "constant", which means 
    unchangeable and read-only
*/

//Identifiers are uniques names that uniquely identify variables

/*
    Rules of Naming Identifiers
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names
*/
const float pi = 3.14;

int main(){
    int identifierSample = 10;
    cout << "Hello World";
    return 0;
}