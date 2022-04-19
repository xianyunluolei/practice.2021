#include<stdio.h>

int main()
{
    int n = 0, m = 0, i, j;
    int a[100] = { 0 }, b[100] = { 0 };
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    /* for (i = 0; i < n; i++)
     {
         printf("%d\n", a[i]);
     }*/
    scanf_s("%d", &m);
    for (j = 0; j < m; j++)
    {
        scanf_s("%d", &b[j]);
    }
    /*for (i = 0; i < m; i++)
    {
        printf("%d\n", b[i]);
    }*/

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
            }
             if (a[i] != b[j])
             {
              	printf("N0 Answer");
             }

        }
    }
    return 0;
}