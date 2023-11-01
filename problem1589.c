#include<stdio.h>

int main()
{
    int T,i,R1,R2,sum=0;
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&R1,&R2);

        sum=R1+R2;
        printf("%d\n",sum);
    }

    return 0;
}

