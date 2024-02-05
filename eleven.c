#include<stdio.h>
void main()
{
 int a, b, temp;

 printf("Enter Numbers: ");
 scanf("%d%d",&a,&b);
 printf("\nBefore Swapping..\na=%d,b=%d",a,b); 
 temp=a;
 a=b;
 b=temp;
 printf("\nAfter Swapping..\na=%d,b=%d",a,b);

}
