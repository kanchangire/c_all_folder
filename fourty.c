#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
