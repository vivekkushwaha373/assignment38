#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.assign({1,2,3});
    for(auto x=l.begin();x!=l.end();x++)
    cout<<*x<<" ";
    cout<<endl;
    l.clear();
    for(auto x=l.begin();x!=l.end();x++)
    cout<<*x<<" ";
    l.assign({1,2,3,4,5,6});
    for(auto x=l.begin();x!=l.end();x++)
    cout<<*x<<" ";
    cout<<endl;
    l.erase(l.begin(),++++++l.begin());
    for(auto x=l.begin();x!=l.end();x++)
    cout<<*x<<" ";
        return 0;
}