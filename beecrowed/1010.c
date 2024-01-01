#include<stdio.h>
int main()
{
    int a, b, x, y;
    double c, z, sum;
    scanf("%d %d %lf %d %d %lf", &a, &b, &c, &x, &y, &z);

    sum =  (b * c) + (y * z);

    printf("VALOR A PAGAR: R$  %.2lf\n", sum);

    return 0;
}

