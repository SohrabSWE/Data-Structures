#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)  // O(logN)
    {
        int digit = n%10;
        cout<<digit<<endl;
        n/=10;
    }
    return 0;
}