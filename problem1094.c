#include<stdio.h>

int main()
{
    int N,amount,name,c,rt=0,rb=0,i;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%d %c",&amount,&name);

        if(name=='C')
        {
            c=amount;
            amount=c+amount;
        }
    }

    printf("%d",amount);

    return 0;
}

