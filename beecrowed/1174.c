#include<stdio.h>
int main()
{
    int a[5], i, j;
    double n, count;

    for(i=0; i<5; i++)
    {
        scanf("%lf", &n);
        if(n>10)
            count++;
        else if(n<=10)
            a[i]=n;
    }
    for(j=0; j<(5-count); j++)
    {
        printf("A[%d] = %d\n", j, a[j]);
    }


    return 0;
}
