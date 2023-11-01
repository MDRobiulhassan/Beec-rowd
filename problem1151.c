#include<stdio.h>

int main()
{
    int N,i,first=0,second=1,fibo=0,count=0;
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        if(count<=1)
            fibo=count;
        else
            fibo=first+second;
            first=second;
            second=fibo;

        printf("%d ",fibo);
        count++;
    }

    return 0;
}

