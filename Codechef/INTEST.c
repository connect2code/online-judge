#include<iostream>
using namespace std;
int main()
{
int t;
int k,n,count=0;
cin>>t>>k;
while(t--)
{
scanf("%d",&n);
if(n%k==0)
count++;
}

cout<<count<<"\n";
}