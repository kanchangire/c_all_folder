#include<stdio.h>
void main()
{
 int n,i,a[20];

 printf("Enter number...");
 scanf("%d",&n);
 printf("Enter array elements :\n" );
 for(i=0;i<n;i++)
  {
    printf("Enter element %d : ",i+1);
    scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
    printf("\nElement %d : %d",i+1,a[i]);

}
