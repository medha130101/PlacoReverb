#include<iostream>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;
// For the internal implementation, for the case of  vector, a singly Linked List is maintained.
// For the case of internal implementation of a list, a doubly Linked List is maintained.
void myList()
{
    list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.emplace_back(3);
    list.push_back(4);
    list.push_front(5);
    list.emplace_front(6);
    cout<<"Print the list created as: ";
    for(auto it:list)
    {
        cout<<it<<" ";
    }
}

void deQueue()
{
    deque<int> my_dq;
    my_dq.push_back(1); // {1}
    my_dq.emplace_back(2); // {1,2}
    my_dq.push_front(4); // {4,1,2}
    my_dq.emplace_front(3) ;// {3,4,1,2}

    my_dq.pop_back(); // {3,4,1}
    my_dq.pop_front(); // {4,1}
    cout<<endl;
    cout<<"Print the back: ";
    cout<<my_dq.back()<<endl; // 1
    cout<<"Print the front: "; 
    cout<<my_dq.front()<<endl; // 4
    cout<<"Print the Queue ";
    for(auto it:my_dq)
    {
        cout<<it<<" ";
    }
}
void my_stack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<endl;
    cout<<"Here in the Stack"<<endl;
    cout<<"Top of the stack: " <<st.top()<<" ";
    // By default POP is supposed to remove the top most 
    st.pop(); // Pop the top of the stack ( LIFO - Last In First Out)
    cout<<st.top()<<" ";
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    stack<int> st1,st2;
    st1.swap(st2);
}
/*----------------Queue-----------------------*/
void my_Queue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.push(4);
    q.back() += 5;
    // Queue - A queue is used to pop out the front element
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"The element at the back of the queue is: ";
    cout<<q.back()<<endl;
    cout<<"The element at the front of the queue is: ";
    cout<<q.front()<<endl;
    q.pop(); // Pop the element in the 
    cout<<q.front()<<endl;


}
// Priority Queue
void my_pq()
{
    // By default, the Priority Queue being implemented in the STL Library is a Max Heap and the maximum element stays on the top.
    cout<<"Currently in the Priority Queue"<<endl;
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}
    //cout<<endl;
    cout<<pq.top()<<" "; // Print 10
    pq.pop();
    cout<<pq.top()<<" "; // Print 8
    priority_queue<int, vector<int>, greater<int>> pq_min_heap;
    pq_min_heap.push(5);
    pq_min_heap.push(2);
    pq_min_heap.push(10);
    pq_min_heap.emplace(50);
    cout<<endl;
    cout<<"The top most element in the MIN-HEAP is as: ";
    cout<<pq_min_heap.top()<<endl;
    cout<<pq_min_heap.top();

}
int main()
{
    myList();
    deQueue(); // Double Ended Queue
    my_stack();
    my_Queue();
    my_pq(); // Priority Queue

}