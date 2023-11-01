#include<stdio.h>

int main()
{
    int N,i,X,Y,sum=0,j;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&X,&Y);

        if(X>Y)
        {
            for(j=Y+1;j<X;j++)
            {
                if(j%2!=0)
                    sum=sum+j;
            }
        }
        else if(X<Y)
        {
            for(j=X+1;j<Y;j++)
            {
                if(j%2!=0)
                    sum=sum+j;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
