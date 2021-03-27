#include <iostream>
#include <string>
using namespace std;

/*
Arrays are used to store multiple values in a single variable, 
instead of declaring separate variables for each value.

To declare an array, define the variable type, 
specify the name of the array followed by square 
brackets and specify the number of elements it should store:
*/

int main(){
    //defining arrays
    string employees[5] = {"Joel", "Clemence", "Mercy", "Michal"};
    int catMarks[7] = {20,25,28,23,27,24,22};

    //accessing the values
    cout<<employees[1]<<endl; //outputs clemence

    //changing elements: To do this you specify the element index
    employees[2] = "mumMichal";
    catMarks[3] = 30;
    cout<<employees[2]<<endl; //outputs mumMichal
    cout<<catMarks[3]<<endl; //outputs 30
}