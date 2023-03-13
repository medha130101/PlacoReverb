#include<iostream>
#include<vector>
using namespace std;
void print()
{
    cout<<"Medha"<<endl;
}

int sum (int a , int b)
{
    return a + b;

}

/*---------------------------UTILITY STRUCTURES--------------------*/
// Pair
void myPair()
{
    pair<int, int> p  = {1,3};
    cout<<p.first<<"---Printing p as {1,3}-----"<< p.second<<endl;
    // Nested Pair - newP.second is ERROR and hence use the exact position values.
    pair< int , pair<int,int>> newP = {1,{3,4}};
    cout<<newP.first<<" "<< newP.second.second<<" "<<newP.second.first<<" "<<newP.second.second<<endl;
    // Create an array of Pairs
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<" "<<arr[2].second<<endl;
}
/*-------------------------------VECTORS--------------------------*/
void myVector()
{
    // Container - Used to contain the elements
    vector<int> v; // Empty Container
    v.push_back(1);
    v.emplace_back(2); // Faster ( Relative to push_back)
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<pair<int,int>> my_vec;
    my_vec.push_back({1,2});
    my_vec.emplace_back(1,2); // Do not need to specify a pair distinctly by curled braces.
    // Declare an instance of 5 elements, where each element has a value 100.
    vector<int> vpre(5,100);
    // Compiler dependent initialization - Might not be necessarily all zeroes.
    vector<int> vnew(5); // As the vector is dynamic the size will increase.
    vector<int> v1(5,20);
    vector<int> v2(v1); // Copy of the given vector v1

    /*-------------Access the elements of the vector--------------*/
    // Initilaization of an Iterator - 
    /* 1. Beginning of the Vector
    2. End of the Vector
    3. Reverse end of the Vector */
    vector<int>::iterator it1 = v.begin(); // Initialize
    it1++; // Increement
    // As the iterator is at the beginning, output the element at Index-1.
    cout<< *(it1) << " "; // De-reference
    it1 = it1 + 2; // Shift the memory address
    // Access the elements of the vector.
    cout<<v[0]<<" "<<v.at(1)<<endl;
    vector<int>::iterator it2 = v.end();
    /*--------NOTE----------v.end() is at the last memory location, next to the address at which the last element of the vector exists.*/
    cout<<" "<<*(it2)<<endl;
    cout<<"The first element is:"<<*(v.rend()++)<<endl;  // Random value initialized by compiler - Post Increement
    cout<<"The first element is:"<<*(v.rend())<<endl;  // Random value initialized by compiler and note that increement provides random values.
    cout<<"The first element is:"<<*(v.rend()--)<<endl;  // Random value initialized by compiler - Pre Increement
    // The appropriate values can be accessed as follows - 
    cout<<"The first element is:"<<*(--v.rend())<<endl;  // Random value initialized by compiler - Pre Increement
    cout<<"The last element is:"<<*(v.rbegin())<<endl;
    // Get the element at the back - An ITERATOR is not returned in this case.
    cout<<"The last element is: "<<v.back()<<endl;


    /*------------------------LOOP-----------------*/
    int i = 1;
    cout<<"Looping over the given vector"<<endl;
    for(vector<int>::iterator it = v.begin() ;  it != v.end() ; it++,i++)
    {
        cout<<"The"<<i<<" value in th given vector is :";
        cout<<*(it)<<endl;
    }
    /*------------------------How to use 'auto' ?--------------*/
    // Use auto - As 'auto' itself is capable to find the appropriare Data Type for the Vector and assign it to the declared vector.
    for(auto it_new = v.begin(); it_new != v.end(); it_new++)
    {
        cout<<"The value is ";
        cout<<*(it_new)<<" ";
    }
    cout<<endl;
    /*---------------------------Short-Hand-----------------------*/
    // For the case of for each loop, the iterator is 'it' itself and is used to print the value.
    for(auto it : v)
    {
        cout<<it<<endl;
    }
    /*-----------------------------Delete-------------------------*/
    v.erase(v.begin()+1);
    cout<<"After erasing the last element"<<endl;
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    /*---------------------------Delete in Range------------------*/
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // Note that deletion starts at the start index and is inclusive of the element at the first index of the vector and exclusive the elment at the last index.
    v.erase(v.begin()+2,v.begin()+4);
    cout<<"After erasing from v.begin()+2 to v.begin()+4 :";
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    /*---------------------Insert---------------------------------*/
    vector<int>v3(2,100);
    // Specify the position to insert the element and the value of the element to insert.
    v3.insert(v3.begin(),300);// { 300 100 100}
    // Specify the position, the frequency and the value or the element to be inserted.
    v3.insert(v3.begin()+1,2,10); // {300 10 10 100 100}
    cout<<endl;
    cout<<"After insertion of duplicate elements: ";
    for(auto it : v3)
    {
        cout<<it<<" ";
    }
    vector<int> copy(2,50);
    v3.insert(v3.begin(),copy.begin(),copy.end());
    cout<<"After insertion of one vector to another: ";
    for(auto it : v3)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    /* Find out the size of the vector*/
    cout<<"The size of the vector is as ";
    cout<<v3.size()<<endl;
    v3.pop_back(); //  Remove the last element.
    cout<<"After the Pop Back :"<<endl;
    for(auto it:v3)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    v1.swap(v3);
    cout<<"After a swap with the values in the Vector V1 :";
    for(auto it:v3)
    {
        cout<<it<<" ";
    }
    v3.clear();
    cout<<v3.empty()<<endl;

}
int main()
{
    int a = 10;
    char b = 'a';
    //cin>>a;
    // Scope - 'std' defines a scope.
    //std::cin>>b;
    cout<<a<<endl;
    std::cout<<b<<endl;
    //myPair();
    myVector();
    return 0;

}

// STL - 1. Algorithms 2. Containers 3. Functions 4. Iterators.
