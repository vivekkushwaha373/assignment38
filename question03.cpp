//iterating a list
#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>l1;
l1.assign({1,2,3,4});
list<int>l2;
l2.assign(l1.begin(),l1.end());
list<int>:: iterator x;
x=l2.begin();
for(x;x!=l2.end();x++)
cout<<*x<<" ";

}