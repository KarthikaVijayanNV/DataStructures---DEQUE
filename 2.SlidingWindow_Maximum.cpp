#include <iostream>  // sliding window maximum or maximum of all subarrays of size k
#include<deque>
#include<vector>

using namespace std;
int main()
{

    int n, k;
    cout << "Enter size and K" << endl;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &i : arr )
    {
        cin>>i;
    }


    deque<int> dq;
    vector<int> ans;

   //logical operations

   for(int i=0 ;i<k; i++)
   {
       while(!dq.empty()  &&  arr[dq.back()]  < arr[i] )
       {
           dq.pop_back();
       }
       dq.push_back(i);
   }
   ans.push_back(arr[dq.front()]);



   for(int i=k; i<n; i++)
   { 
       if(dq.front() == i-k)  // out of the boundry ..unwanted elemets deleted
       {
           dq.pop_front();
       }

       while(!dq.empty() &&  arr[dq.back()]  < arr[i])
       {
           dq.pop_back();
       }
       dq.push_back(i);

       ans.push_back(arr[dq.front()]);
   }

   // output the ans array
   for(auto i: ans)
   {
       cout<<i<<" ";
   }

    return 0;
}