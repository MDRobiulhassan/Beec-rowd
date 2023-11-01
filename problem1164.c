#include<stdio.h>

int main()
{
    int N,i,j,num,rem=0;
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        scanf("%d",&num);

        for(j=1; j<num; j++)
        {
            if(num%j==0)
            {
                rem=rem+j;
            }
        }

        if(rem==num)
        {
            printf("%d eh perfeito\n",num);
        }
        else
        {
            printf("%d nao eh perfeito\n",num);
        }

        rem=0;

    }


    return 0;
}

