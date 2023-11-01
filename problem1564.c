#include<stdio.h>

int main()
{
    int N,n,i;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%d",&n);

        if(n==0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }

    return 0;
}

