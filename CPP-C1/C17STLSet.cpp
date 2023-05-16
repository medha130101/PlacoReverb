#include<iostream>
#include<set>
#include<unordered_set>
#include<map>
using namespace std;
// NOTE - 
/*-------A set is always sorted.-----------*/
/*-------A set always consists of only unique values.--------*/
/*--------The Time Complexity of every operation is logarithmic(log(N))*/
/*---1. INSERT 2.ERASE 3.EMPLACE 4.FIND 5.COUNT*/
void my_set()
{
    set<int> set;
    set.insert(1); // {1}
    set.insert(2); // {1,2}
    set.insert(2); // {1,2}
    set.insert(4); // {1,2,4}
    set.insert(5); // {1,2,4,5}
    auto it1 = set.find(1);
    /*---------NOTE-----------*/
    /*-----If an element does not exists in a set, the value is put in an iterator and the iterator value is next to the last element.----*/
    auto it2 = set.find(8);
    auto it3 = set.end();
    cout<<" The values of the iterator are as follows:- ";
    cout<<*it1<<endl;
    cout<<*it2<<endl;
    cout<<*it3<<endl;
    // Hence the value returned is l
    it2--; // {Points to 5}
    it2--; // {Points to 4}
    it2--; // {Points to 2}
    it2--; // {Points to 1}
    cout<<*it2<<endl;
    auto it_start = set.find(2);
    auto it_end = set.find(4);
    set.erase(it_start,it_end);
    //set.erase(5); // Logarithmic Time Complexity to remove the element.
    //it2 = set.find(5);
    //Note - Complete Upper Bound and Lower Bound.
    int cnt = set.count(1);
    cout<<"The value of count is: ";
    cout<<cnt<<endl;
}
/*---Unlike set, a multi-set has the capability to store mutliple occurences of the same integer value and is sorted*/
void my_multiset()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    int count = ms.count(1);
    cout<<"The count of the value 1 in the multi-set is : "<<ms.count(1);
    // Delet only certain specific occurence of 1;
    auto it_ms = ms.find(1);
    ms.erase(it_ms);
    std::advance(it_ms,count);
    ms.erase(ms.find(1),it_ms);
    for(auto it_new_ms = ms.begin(); it_new_ms != ms.end(); it_new_ms++)
    {
        cout<<"The element in the mutli-set is as : "<<*(it_new_ms)<<" ";
    }
}
/*------Unordered Set-- The values in an unordered set are not sorted but unique. The values in the set are however unique. */
void my_unordered_set()
{
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);

}
void my_map()
{
    // Remember -  A map stores only unique keys in sorted order, similar to the SET Data Structure.
    map<int,int> mp1;
    // In this case, the given key is 2 Integer Values.
    // In the next case, the value is 2 Integer Values, rather than the key.
    map<int,pair<int,int>> mp2;
    map<pair<int,int>,int> mp3;
 
    // Key - Value Pair for the MAP declared.
    mp1[1] = 2;
    mp1.insert({2,4});
    mp1[3] = 5;
    mp3.insert(std::make_pair(std::make_pair(3,3), 10));
    for(auto it : mp1)
    {
        cout<<it.first<<" "<<it.second<<endl;

    }

}
int main()
{
    my_set();
    my_unordered_set();
    my_map();
    return 0;
}