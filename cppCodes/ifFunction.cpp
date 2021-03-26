#include <iostream>
using namespace std;
/* 
syntax

if(condition){
    statements
}

*/


int main(){
    int marks = 90;

    if (10>5){
        cout<< "True"<<endl;
    }

    //if else function

    /*
    syntax
    if(condition){
        statements
    }
    else{
        statements
    }
    */

   if (marks<50){
       cout<<"Below Average"<<endl;
   }
   else{
       cout<<"pass"<<endl;
   }

   //else if
   /*
   syntax
   if(condition){
       statements
   }
   else if(condition2){
       statements
   }
   else{
       statements
   } 
   */

  if (marks<30){
      cout<<"What a failure"<<endl;
  }
  else if(marks>=30<=50){
      cout<< "Average"<<endl;
  }
  else {
      cout << "pass"<<endl;
  }

  //shorthand if
  /*
  syntax
  variable = (condition) ? expressionTrue : expressionFalse;
  
  */

 int age = 36;
 string rating = (age<=35)? "Young\n":"Old\n";
}