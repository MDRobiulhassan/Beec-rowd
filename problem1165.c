#include<stdio.h>

int main()
{
    int N,i,num,j,count=0;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%d",&num);

        for(j=2;j<num;j++)
        {
            if(num%j==0)
            {
                count++;
                break;
            }
        }

        if(count==0)
            printf("%d eh primo\n",num);
        else
            printf("%d nao eh primo\n",num);

        count=0;

    }

    return 0;
}

