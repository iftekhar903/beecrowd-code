#include <stdio.h>
int main()
{
    int n[5], i, countevn=0, countodd=0, countpos=0, countneg=0;

    for(i=0; i<5; i++)
    {
        scanf("%d", &n[i]);
    }

    for(i=0; i<5; i++)
    {
        if(n[i]%2==0)
        {
            countevn++;
        }
        else
        {
            countodd++;
        }

        if(n[i]>=1)
        {
            countpos++;
        }
        else if(n[i]<0)
        {
            countneg++;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", countevn, countodd, countpos, countneg);

    return 0;
}

