#include<stdio.h>
void main()
{
  int i=1,num;

  printf("Enter number : ");
  scanf("%d",&num);
  while(i<=num)
  {
     printf("%d\t",i);
     i++;
  }
}

