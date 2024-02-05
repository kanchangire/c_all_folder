#include<stdio.h>
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j||i+j==5)
           {
                printf("*");
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }
}
