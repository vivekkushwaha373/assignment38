#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>l1={1,2,3};
list<int>l2={4,5,6};
cout<<l1.size()<<" "<<l2.size();
cout<<endl;
l1.merge(l2);
cout<<l1.size()<<" "<<l2.size();
cout<<endl;
for(auto x=l1.begin();x!=l1.end();x++)
cout<<*x<<" ";
    return 0;
}