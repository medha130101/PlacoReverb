#include<iostream>
using namespace std;
int main()
{
    int x;
    // 4 Bytes
    cout<<sizeof(x)<<endl;
    cout<<sizeof(int)<<endl;
    // 1 Byte
    cout<<sizeof(char)<<endl;
    // 1 Byte
    cout<<sizeof(bool)<<endl;
    // 4 Bytes
    cout<<sizeof(float)<<endl;
    // 8 Bytes
    cout<<sizeof(double)<<endl;

    cout<<"Check for Modifiers: "<<endl;
    int my_marks;
    unsigned int my_us_marks;
    short int my_short_marks;
    long long int my_long_long_marks;
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(my_marks)<<endl;
    cout<<sizeof(my_us_marks)<<endl;
    // Shorter than 'int' (4 bytes, reduced to 2 bytes)
    cout<<sizeof(my_short_marks)<<endl;
    // Larger than 'int' (4 bytes, enhanced to 8 bytes)
    cout<<sizeof(my_long_long_marks)<<endl;
    return 0;

}