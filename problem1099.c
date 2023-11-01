#include<stdio.h>

int main()
{
    int N,i,j,a,b,c=0;
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        scanf("%d %d",&a,&b);

        for(j=a+1;j<b;j++)
        {
            if(j%2!=0)
            {
                c=c+j;
            }
        }
        printf("%d\n",c);
        c=0;
    }



    return 0;
}

