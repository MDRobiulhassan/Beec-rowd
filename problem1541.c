#include<stdio.h>

int main()
{
    int N,A,B,C,i,sum=0,result;
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        scanf("%d",&A);

        if(A==0)
            break;

        scanf("%d %d",&B,&C);

        sum=(A*B*100)/C;
        result=sqrt(sum);

        printf("%d\n",result);

    }

    return 0;
}

