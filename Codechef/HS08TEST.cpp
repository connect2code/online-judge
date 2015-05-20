#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 int x;
 float y;
 
 cin>>x>>y;
 
 if(x%5!=0||y-x-0.5<0)
 printf("%.2f\n",y);
 
 else printf("%.2f\n",y-x-0.5);

return 0;
}
