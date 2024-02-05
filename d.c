#include<stdio.h>
void main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(i==1||j==10||i==9||j==5)
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
