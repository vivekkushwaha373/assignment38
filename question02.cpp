#include<bits/stdc++.h>
using namespace std;
int main()
{//note->assign is a member function works both in list and forward list;
   list<int>l1;
   l1.assign({1,2,3});
   list<int> :: iterator s1;
   s1=l1.begin();
   for(s1;s1!=l1.end();s1++)
   {
    cout<<*s1<<" ";
   }
    return 0;
}