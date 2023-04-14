#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>l1;

   for(int i=0;i<5;i++)
   l1.push_back(i+1);
   list<int>:: const_iterator i=l1.begin();
   list<int>:: iterator y;

   for(i;i!=l1.end();i++)
   cout<<*i<<" ";
   //const_iterator can't chage the value of elemnt it points whereas itertor does; 
       return 0;
}