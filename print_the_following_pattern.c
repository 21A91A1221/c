#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=1; i<=a; i++)
    {
        for (j=1; j<=a; j++)
        {
            if (i==j)
            {
                printf("0");
            }
            else
            {
                printf("x");
            }
            if (j==a)
            {
                printf("
");
            }
        }
    }
    return 0;
}