#include<stdio.h>

int main()
{
    int T,i,j,a;
    long long int N[61],fibo[61];

    N[0]=0,N[1]=1;
    fibo[0]=0,fibo[1]=1;
    for(j=2; j<61; j++)
    {
        fibo[j]=N[0]+N[1];
        N[0]=N[1];
        N[1]=fibo[j];
    }

    scanf("%d",&T);
    for(i=0; i<T;i++)
    {
        scanf("%d",&a);

        printf("fibo(%d) = %lld\n",i,fibo[a]);

    }

        return 0;
}

