#include <iostream>
#include <string>
using namespace std;

int main(){
    //String Concatenation
    string fName = "Gift";
    string lName = "Mwaiseghe";
    string fullName = fName + lName;

    cout << fullName<<endl;
    cout<<fullName.length();

    //append
    string appendedName = fName.append(lName);
    cout << appendedName;
}