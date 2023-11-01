#include<stdio.h>

int main()
{
    int N,i,count=0;
    scanf("%d",&N);
    int X[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
    }

    int min=X[0];
    for(i=1; i<N; i++)
    {
        if(X[i]<min)
        {
            min=X[i];
            count=i;
        }
    }

    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",count);

    return 0;
}

