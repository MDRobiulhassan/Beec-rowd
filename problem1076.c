#include<stdio.h>

int main()
{
    int N,i,Mult=1;
    scanf("%d",&N);

    for(i=1;i<=10;i++)
    {
        Mult=N*i;
        printf("%d x %d = %d\n",i,N,Mult);
    }

    return 0;
}

