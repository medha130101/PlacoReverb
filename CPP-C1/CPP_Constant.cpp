#include<iostream>
using namespace std;

 #define PI 3.14
 #define LOAN_PERIOD 10

int main()
{

    // METHOD - 1 - To declare a constant, use the 'const' keyword.
    // Declare a Constant
    // The value of a 'constant' can not be modified throughout the program.
    const float pi = 3.14 ;
    const int loan_period = 10 ;

    // ERROR - No operations and assignments on a constant value itself.

    //pi = pi+1;


    // ERROR - As initialisation is must for the constants here.
    // const int x;
    // x = 5;


    // METHOD-2 Use the Pre-Processor Directive & MACRO
    

     // Does not occupy space in the memory, rather a replacement.

     cout<<pi<<endl;
     cout<<loan_period<<endl;
     // pi - Constant Variable
     cout<<pi*pi<<endl;

     // MACRO
     cout<<PI * PI <<endl;


}