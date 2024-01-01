#include<stdio.h>
int main()
{
    int n[100], i, count;
    for(i=0; i<100; i++)
    {
        scanf("%d", &n[i]);
    }
    int max=n[0];

    for(i=0; i<100; i++)
    {
        if(max<n[i])
        {
            max=n[i];
            count=i+1;
        }
    }

    printf("%d\n%d\n", max, count);

    return 0;
}

