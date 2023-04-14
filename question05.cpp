#include<bits/stdc++.h>
using namespace std;
int main()
{
   int size;
   cout<<"Enter the size of the list: ";
   cin>>size;
   int n;
   list<int>l1;
   for(int i=0;i<size;i++)
   {
    cout<<"Enter the "<<i+1<<" Element: ";
    cin>>n;
    l1.push_back(n);
   }
   cout<<endl;
   for(auto x=l1.begin();x!=l1.end();x++)
   cout<<*x<<" ";
   cout<<endl;
    return 0;
}