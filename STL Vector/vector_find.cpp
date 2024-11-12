#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {2,3,4,5,6,3,4};
    // vector<int> :: iterator it;
    // it = find(v.begin(), v.end(), 3);
    // cout<<*it;


    vector<int> v = {2,3,4,5,6,3,4};
    auto it = find(v.begin(), v.end(), 100);
    if(it == v.end()) cout<<"not found";
    else cout<<"found";
    return 0;
}