#include<stdio.h>
int main()
{
 int n1,n2,n3;
 scanf("%d%d%d",&n1,&n2,&n3);
 if(n1>n2 && n2>n3)
 printf("n1 is the greatest number");
 else if(n2>n1 && n2>n3)
 printf("n2 is the greatest number");
 else
 printf("n3 is the greatest number");
 return 0;
 }
 
