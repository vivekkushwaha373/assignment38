#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[5]={1,2,3,4,5};
   list<int>l;
   l.assign(arr,arr+5);
   list<int>::iterator x;
   for(x=l.begin();x!=l.end();x++)
   cout<<*x<<" ";

    return 0;
}