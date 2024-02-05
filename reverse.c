#include<stdio.h>
void main()
{
    int rev,num,rem,ori;
    printf("enter your number ");
    scanf("%d",&num);
    ori=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d reverse ",rev);
   
}
