#include<stdio.h>

int main()
{
    int C,N,i,j,k,sum1=0,sum2=0;
    scanf("%d",&C);

    for(i=1;i<=C;i++)
    {
        scanf("%d",&N);

        for(j=1;j<=N;j=j+2)
        {
            sum1=sum1+1;
        }
        for(k=2;k<=N;k=k+2)
        {
            sum2=sum2+1;
        }
        printf("%d\n",sum1-sum2);
        sum1=0,sum2=0;
    }



    return 0;
}

