#include<iostream>
// namespace - To declare a scope
using namespace std;

namespace meme
{
    int value = 50;
    int getVal()
    {
        return value*10;
    }
}
// Create  a Data Type to store the values for multiple Data Types - To create your own Data Type of type - struct.
//
struct node
{
    string str;
    int num;
    double doub;
    char x;
    // Constructor for the structure defined.
    node(string name_ , int num_, double doub_ , char x_)
    {
        this->str  = name_;
        this->num = num_;
        this->doub = doub_;
        this->x = x_;
    }
};

int main()
{
    //int value = 50; - Declare a variable twice with distinct data-type -> Compile Time Error.
    // Solution - Declare a variable within a new namespace.
    double value = 10.0;
    cout<<value<< endl;
    cout<<meme::value<<endl;
    cout<<meme::getVal()<<endl;
    // Correct but not preferred. Always create a new node by dynamically using the new() keyword.
    /*node my_info;
    my_info.str = "Medha";
    my_info.num = 22;
    my_info.doub = 12.2;
    my_info.x = 'A';*/
    // Define the Constructor and Initialize the Node as below :-
    node* my_node =  new node("Medha",10,12.2,'A');
    cout<<my_node->doub<<endl;
    cout<<"Hello"<<endl;
    return  0;
}

