#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2,3,4,5,2,3,4,6,7,2};
    replace(v.begin(), v.end(), 2, 100);
    for(int val : v)
    {
        cout<<val<<" ";
    }
    return 0;
}