#include<stdio.h>
int main()
{
    int N, X, Y;
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d %d", &X, &Y);
        int sum=0;
        if(X>Y)
        {
            for(int j=Y+1; j<X; j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
        }
        else if(X<Y)
        {
             for(int j=X+1; j<Y; j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}

