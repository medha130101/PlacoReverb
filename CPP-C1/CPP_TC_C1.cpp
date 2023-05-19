#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum = a + b + c + d + e;
    float avg = sum/5.0;
    cout<< fixed<<setprecision(4)<<"The Avergae of the nos. is: "<<avg<<endl;

    return 0;

}