#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("enter your number ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
      
    }
      printf("%d factorial ",fact);
}
