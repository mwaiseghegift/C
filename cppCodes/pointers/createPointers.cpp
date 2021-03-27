#include <iostream>
#include <string>
using namespace std;

//A pointer is a variable that stores the memory address as its value.

/*

different ways to declare a pointer

string* mystring; // Preferred
string *mystring;
string * mystring;

*/

int main(){
    string name = "Gift";
    //this is how
    string* namePtr = &name;

    cout << name<<endl; //outputs Gift
    cout << &name<<endl; //outputs <memoryaddress>
    cout <<namePtr << endl; //outputs <memoryaddress>


}