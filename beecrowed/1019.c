#include<stdio.h>
int main()
{
    int N,H=0,M=0,S=0;
    scanf("%d",&N);
    H=N/3600;
    N=N%3600;//why this line and % sign
    M=N/60;
    S=N%60;
    printf("%d:%d:%d\n",H,M,S);
    return 0;


}
