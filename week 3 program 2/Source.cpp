#include <stdio.h>
int main()
{
    int  a, n;
    printf("Input number of rows : ");
    scanf_s("%d", &n);
    a = n;
    for (int i = 1;i <= n;i++)
    {
        for (int k = a;k >= 1;k--)
        {
            printf(" ");
        }

        for (int j = 1;j <= i;j++)
            printf("%d ",i);
        printf("\n");
        a--;
    }
    return 0;
}