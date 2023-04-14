//unique-->removes duplicate consecutive elements in the list
#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>l1;
   l1.assign({1,1,2,3,4,5,6,4});
    for(auto x=l1.begin();x!=l1.end();x++)
   cout<<*x<<" ";
   cout<<endl;
   l1.unique();
   for(auto x=l1.begin();x!=l1.end();x++)
   cout<<*x<<" ";
   cout<<endl;
    return 0;
}