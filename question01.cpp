#include<bits/stdc++.h>
using namespace std;
int main()
{//note->assign is a member function works both in list and forward list;
   list<int>l1;
   l1.assign({1,2,3});
//    l1.assign(10,5);
list<int>::iterator x;


   l1.insert(l1.begin(),{4,5,6});
   list<int> :: iterator s1;
   s1=l1.begin();
   for(s1;s1!=l1.end();s1++)
   {
    cout<<*s1<<" ";
   }
   cout<<endl;
   cout<<l1.size()<<endl;
   
   cout<<endl;
   l1.erase((l1.begin())++);
//    s1=l1.begin();
   
   for(s1;s1!=l1.end();s1++)
   {
    cout<<*s1<<" ";
   }
   cout<<endl;
   cout<<l1.size()<<endl;
   
    return 0;
}