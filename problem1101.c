#include<stdio.h>

int main()
{
    int M,N,i,sum=0;

    for(i=1; i<10; i++)
    {
        scanf("%d %d",&M,&N);
        if(M==0 || N==0)
            break;
        else
        {
            sum=sum+i;
            printf("%d ",i);
        }
    }
    if(N!=0)
        printf("Sum=%d",sum);

    return 0;
}
