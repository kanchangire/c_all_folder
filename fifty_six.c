#include<stdio.h>
 
void main()
{
  int n,rem,a,b;
  char op;
 
  printf("Enter Operator(addition,substraction,multiplication,divide)...");
  scanf("%c",&op);
  printf("Enter numbers...");
  scanf("%d%d",&a,&b);
  switch(op)
  {
  case '+' : printf("Result : %d ",a+b);break;
  case '-' : printf("Result : %d ",a-b);break;
  case '*' : printf("Result : %d ",a*b);break;
  case '/' : printf("Result : %d ",a/b);break;
  default  : printf("Invalid operator....");
  }
 
}
