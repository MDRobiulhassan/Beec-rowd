#include<stdio.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    float X,Y;

    for(i=1; i<=N; i++)
    {
        scanf("%f %f", &X, &Y);

        if(Y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n", (X/Y) );
        }
    }

    return 0;
}

