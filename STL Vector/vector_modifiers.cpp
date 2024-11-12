#include<bits/stdc++.h>
using namespace std;
int main()
{
    // O(1)
    // vector<int> x = {1,2,3};
    // vector<int> v = {3,4,5};
    // v = x;
    // for(int val : v)
    // {
    //     cout<<val<<" ";
    // }

    // O(N)
    // vector<int> x = {1,2,3,10};
    // vector<int> v = {3,4,5};
    // v = x;
    // for(int val : v)
    // {
    //     cout<<val<<" ";
    // }


    // vector<int> v = {1,2,3,4};
    // // v.push_back(5);
    // v.pop_back();
    // for(int val : v)
    // {
    //     cout<<val<<" ";
    // }


    // vector<int> v = {1,2,3,4,5,6};
    // v.insert(v.begin()+2, 10);
    // for(int val : v)
    // {
    //     cout<<val<<" ";
    // }


    // vector<int> v = {1,2,3,4,5,6};
    // vector<int> v2 = {10,20,30,40};
    // v.insert(v.begin()+2, v2.begin(), v2.end());
    // for(int val : v)
    // {
    //     cout<<val<<" ";
    // }


    vector<int> v = {1,2,3,4,5,6};
    v.erase(v.begin()+1, v.end()-1);
    for(int val : v)
    {
        cout<<val<<" ";
    }
    return 0;
}