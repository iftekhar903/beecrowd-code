#include<stdio.h>
int main()
{
    float n[6], avg, count=0, sum=0;
    int i;

    for(i=0; i<6; i++)
    {
        scanf("%f", &n[i]);
    }
    for(i=0; i<6; i++)
    {
        if(n[i]>0)
        {
            count++;
            sum = sum+n[i];
        }
    }

    avg=sum/count;
    printf("%.0f valores positivos\n%.1f\n", count, avg);

    return 0;
}

