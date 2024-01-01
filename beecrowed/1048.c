#include<stdio.h>
int main()
{
    float n, nwn, bns, per;

    scanf("%f", &n);
    if(n>0 && n<=400)
    {
        per=15;
    }
    else if(n<=800)
    {
        per=12;
    }
    else if(n<=1200)
    {
        per=10;
    }
    else if(n<=2000)
    {
        per=7;
    }
    else if(n>2000)
    {
        per=4;
    }

    bns= n * (per / 100);
    nwn= n + bns;

    printf("%.2f\n", nwn);
    printf("%.2f\n", bns);
    printf("%.0f %%\n", per);

    return 0;
}

