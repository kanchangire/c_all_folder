#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("enter your number ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            fact++;
        }
    }
    if(fact==2)
    {
        printf("%d number is prime",num);
    }
    else{
        printf("%d numberr is not prime",num);
    }
}
