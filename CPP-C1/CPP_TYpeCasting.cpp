#include<iostream>
using namespace std;
int main()
{
    // Typecasting


    // --------------------------IMPLICIT TYPECASTING----------------------------------//


    // FLOAT + INT  = FLOAT

    cout<<(5/3)<<endl; // Output - INTEGER 
    // Typecasting - Change of resultat Data Type
    cout<<(5/3.0)<<endl; // Output - FLOAT

    // WHY ? 
    // As int/float is default typecasted to 'float'.
    // And int/int, even though a decimal value, is restrictively typecasted to 'int'.


    // CHAR + INT = INT

    char my_char = 'A';
    int my_int = 1;
    int res_int = my_char + my_int; // 66
    char res_char = my_char + my_int; // B
    my_char = my_char + 2;
    // Output - 66 ( ASCII Value of ASCII Code for 'A' + 1)
    cout<<my_char + 1<<endl;

    cout<<my_char<<endl; // Output - C 

    cout<<" Output of 'int' res as Output Varible is: "<<res_int<<endl;
    // Output - B ( If the Data Type of the variable 'res' is set to char)
    cout<<" Output of 'char' res as Output Variable is: "<<res_char<<endl;


    // BOOL + INT = INT
    bool my_bool = true;
    cout<<my_bool +  5 <<endl;

    //------------------------------EXPLICIT TYPECASTING---------------------------------//

    int x = 5;
    cout<<5/3<<endl;
    // EX-1 ( Explicit Typecasting - FLOAT)
    // Direct the compiler to forcefully change the Data Type.
    cout<<(float)5/3<<endl;

    char letter = 'A';
    cout<<letter<<endl;
    // EX-2 ( Explicit Typecasting - CHAR)
    cout<<(char)(letter+5)<<endl;

    // As the 'bool' value of any value v > 1 is set to 'true'
    cout<<(bool)(5+1)<<endl;


    return 0;




}