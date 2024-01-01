#include<stdio.h>
int main()
{
    int N, i;

    scanf("%d", &N);

    if(5<N<2000)
    {
        for(i=2; i<=N; i++)
        {
            if(i%2==0)
            {
                printf("%d^2 = %d\n", i, i*i);
            }
        }
    }


    return 0;
}

