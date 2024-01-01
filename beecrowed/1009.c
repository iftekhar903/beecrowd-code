#include<stdio.h>
int main ()
{
    char name[20] ;
   // float salary;
    double salary,sell,TOTAL;
    //gets(name);
    scanf("%s%lf%lf",&name ,&salary,&sell);
    TOTAL=salary+(sell*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;

}
