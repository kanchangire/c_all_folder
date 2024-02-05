#include<stdio.h>

void main()
{
  int num;

  printf("enter number...");
  scanf("%d",&num);
  if(num>10)
  printf("Number is greater than 10");
  else if(num<10)
  printf("Number is lesser than 10");
  else
  printf("Number is 10");

}
