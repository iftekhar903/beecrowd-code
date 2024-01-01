#include<stdio.h>
int main()
{
    int X, i;
    scanf("%d", &X);

    for(i=X-1; i<=X+10; i++)
    {
        if(i%2==0)
        {
        printf("%d\n", i+1);
        }
    }
    return 0;
}
