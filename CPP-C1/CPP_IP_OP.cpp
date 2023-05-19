#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"Hello World"<<endl;
    // Input - Marks of a student in subjects as P=90, M=75 and C=68
    // Output - Average of Marks

    int p = 90;
    int m = 75;
    int c = 68;

    bool pass = true;
    bool fail = false;

    float pi = 3.14288796;
    double pi_d = 3.14288796;

    char letter = 'A';
    char symbol = '$';

    cout<<letter<<" "<<symbol<<endl;

    //  Input  -  User End

    int p_new, m_new,c_new;
    cin>>p_new;
    cin>>m_new;
    cin>>c_new;

    // NOTE  - The output is not a floating point value but is rather a integer value.
    // For CPP - int/int is an ' int ' , irrespective of the initialised Data Type for the result.
    // Change one of the values to a floating point value to get the final result as a 'float'.

    float avg_marks = (p + m + c)/3;

    // TYPECASTING

    float float_avg_marks = (p+m+c) /3.0 ;

    float float_avg_marks_new = (p_new + m_new + c_new)/3.0;

    cout<<" The Average Marks of the user by user input is as: "<<float_avg_marks_new<<endl;
    cout<<" The boolena value of pass is: "<<pass<<" The boolean value of fail is: "<<false<<endl;
    cout<<" Integer Output - The Average Marks of the student is as: "<<avg_marks<<endl;
    cout<<" Floating Point - The Average Marks of the student is as: "<<float_avg_marks<<endl;
    cout<<setprecision(10)<<pi<<" "<<setprecision(10)<<pi_d<<endl;
    // NOTE - 'float' is not precise as it does not prints the exact value out.
    // On the other hand, 'double' is precise, as the decimal values are exactly as initialised.

}