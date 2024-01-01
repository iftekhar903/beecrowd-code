#include<stdio.h>
int main()
{
    int X[10], n, i;

    for(i=0; i<10; i++)
    {
        scanf("%d", &n);
        if(n<=0)
        {
            printf("X[%d] = 1\n", i);
        }
        else if(n>0)
        {
            printf("X[%d] = %d\n", i, n);
        }
    }

    return 0;
}

