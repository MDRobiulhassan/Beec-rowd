#include<stdio.h>

int main()
{
    double M[12][12],sum=0,avg;
    int i,j,k;
    char op;
    scanf("%c %d",&op,&k);

    for(i=0; i<k; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }

    if(op=='S')
    {
        for(i=0; i<k; i++)
        {
            for(j=0; j<12; j++)
            {
                sum=sum+M[i][j];
            }
        }
        printf("%.1lf\n",sum);
    }

    else if(op=='A')
    {
        for(i=0; i<k; i++)
        {
            for(j=0; j<12; j++)
            {
                sum=sum+M[i][j];
            }
        }
        avg=sum/12;
        printf("%.1lf\n",avg);
    }

    return 0;
}
