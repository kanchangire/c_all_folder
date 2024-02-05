#include <stdio.h>

int main()
{
    int Num, i, j;

    printf("Enter N: ");
    scanf("%d", &Num);

    for(i=1; i<=Num; i++)
    {
   
        for(j=i; j>1; j--)
        {
            printf("%d", j);
        }

        for(j=1; j<= (Num-i +1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

}
