#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>l1;
l1.assign({1,2,3});
l1.insert(l1.begin(),{9});
for(auto x=l1.begin();x!=l1.end();x++)
cout<<*x<<" ";
cout<<endl;
l1.insert(l1.end(),{9});
for(auto x=l1.begin();x!=l1.end();x++)
cout<<*x<<" ";
return 0;
}