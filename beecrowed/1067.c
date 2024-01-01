#include<stdio.h>
int main()
{
    int X, i;
    scanf("%d", &X);

    if(1<=X<=1000)
    {
        for(i=0; i<=X; i++)
        {
            if(i%2==0)
            {
                printf("%d\n", i+1);
            }
        }
    }

    return 0;
}

