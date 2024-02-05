#include<stdio.h>
void main()
{
  int sqr,num,count=1,ori;
  printf("enter your number ");
  scanf("%d",&num);
  ori=num;
  sqr=num*num;
  while(num!=0)
  {
      count=count*10;
      num=num/10;
  }
  if(sqr%count==ori)
  {
      printf("%d number is automorphic ",ori);
  }
  else
  {
      printf("%d number is not automorphic ",ori);
  }
}
