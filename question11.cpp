#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1={1,2,3,4};
    list<int>l2;
    l2.assign(l1.begin(),l1.end());
    for(auto x=l2.begin();x!=l2.end();x++)
    cout<<*x<<" ";
    return 0;
}