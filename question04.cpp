#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1;
    for(int i=0;i<10;i++)
    l1.push_back(i+1);
    cout<<"List before reversed"<<endl;
    for(auto i=l1.begin();i!=l1.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    l1.reverse();
    cout<<"List after reversed"<<endl;
    for(auto i=l1.begin();i!=l1.end();i++)
    cout<<*i<<" ";
    return 0;
}