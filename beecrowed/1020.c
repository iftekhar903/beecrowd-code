#include<stdio.h>
int main()
{
    int a,y=0,m=0,d=0;
    scanf("%d",&a);
    y=a/365;
    a=a%365;
    m=a/30;
    d=a%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);


}
