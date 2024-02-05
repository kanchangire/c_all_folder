#include<stdio.h>
void main()
{
  int i,num,j,k;

  printf("Enter number.....");
  scanf("%d",&num);
  for(i=num-1;i>=0;i--)
  {
    for(j=0;j<=i;j++)
      printf("%c",65+j);
    for(k=1;k<(num-i);k++)
      printf("  ");
    for(j=i;j>=0;j--)
      printf("%c",65+j);
  printf("\n");
  }
 
}

