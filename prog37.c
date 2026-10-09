#include<stdio.h>
int main()
{
 int x,y;
 scanf("%d%d",&x,&y);
 switch(x,y)
 case 1 printf("1 = Addition",x+y);
 case 2 printf("2 = Subtraction",x-y);
 case 3 printf("3 = Multiplication",x*y);
 case 4 printf("4 = Division",x/y);
 case 5 printf("5 = Reminder",x%y);
 return 0;
}
