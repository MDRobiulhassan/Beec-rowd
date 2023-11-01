#include<stdio.h>

int main()
{
    int X,Z,i,sum=0,count=1;
    scanf("%d %d",&X,&Z);

    while(Z<X)
        scanf("%d",&Z);
    for(i=0;i<Z;i++)
    {
        sum=sum+i+X;
        if(sum<=Z)
            count++;
    }
    printf("%d\n",count);

    return 0;
}

