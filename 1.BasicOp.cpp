#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);  //1
    dq.push_back(2);   //2
    dq.push_front(3);   //3
    dq.push_front(4);   //4
    //output
    for(auto i: dq)
    {
        cout<<i<<" ";
    } cout<<endl;       //   4 ,3, 1, 2 


    
    dq.pop_back();  //2  is gone
    dq.pop_front();  // 4 is gone
    //output
    for(auto i: dq)
    {
        cout<<i<<" ";
    } cout<<endl;       // 3 ,1 
 

    //size of the deque
    cout<<dq.size()<<endl; // 2

    return 0;
}