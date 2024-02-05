#include<stdio.h>
void main()
{
  int a=0,b=1,c=0,num;
  printf("enter your number ");
  scanf("%d",&num);
  for(c=1;c<=num;c++)
  {
       printf("%d ",a);
      c=a+b;
      a=b;
      b=c;
     
  }
}
