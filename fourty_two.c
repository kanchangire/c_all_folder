#include<stdio.h>
void main()
{
  for(int i=1;i<=5;i++)
  {
    for(int k=1;k<=(5-i);k++)
      {
       printf(" ");
      }
    for(int j=1;j<=i;j++)
      {
       printf("*");
      }
    for(int j=2;j<=i;j++)
      {
       printf("*");
      }
    printf("\n");
  }
 
  int i,j,k;
  for(i=5;i>=1;i--)
  {
    for(k=1;k<=(5-i);k++)
      {
       printf(" ");
      }
    for(j=1;j<=i;j++)
      {
       printf("*");
      }
    for(j=2;j<=i;j++)
      {
       printf("*");
  }
    printf("\n");
  }
  
}

