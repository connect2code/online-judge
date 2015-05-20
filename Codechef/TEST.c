#include<stdio.h>
 
main()
{
int c;
while(1)
{
c=getchar();
if(c=='4')
{
c=getchar();
if(c=='2')
break;
else putchar('4');
}
putchar(c);
}
}