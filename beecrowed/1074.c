#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int x[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
        if(-10^7<x[i]<10^7)
        {
            if(x[i]==0)
            {
                printf("NULL\n");
            }
            else if(x[i]%2==0 && x[i]>0)
            {
                printf("EVEN POSITIVE\n");
            }
            else if(x[i]%2==0 && x[i]<0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else if(x[i]%2!=0 && x[i]>0)
            {
                printf("ODD POSITIVE\n");
            }
            else if(x[i]%2!=0 && x[i]<0)
            {
                printf("ODD NEGATIVE\n");
            }
        }

    }

    return 0;
}

