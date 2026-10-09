#include<stdio.h>
int main()
{
 int mark;
 scanf("%d",&mark);
 if(mark<=100 && mark>=90)
 printf("Grade A");
 else if(mark<90 && mark>=70)
 printf("Grade B");
 else if(mark<70 && mark>=50)
 printf("Grade C");
 else
 printf("Grade D");
 return 0;
}

