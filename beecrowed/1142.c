#include<stdio.h>
int main()
{
    int n, j, i;

    scanf("%d", &n);
    for(i=1; i<=(n*4); i=i+4)
    {

        for(j=i; j<(i+3); j++)
        {
            printf("%d ", j);
        }
        printf("PUM\n");
    }


    return 0;
}

