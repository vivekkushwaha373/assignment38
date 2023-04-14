#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>l1;
   for(int i=0;i<5;i++)
   l1.push_back(i+1);
   for(auto i=l1.begin();i!=l1.end();i++)
   cout<<*i<<" ";

    return 0;
}