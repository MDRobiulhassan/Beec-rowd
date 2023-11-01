#include<stdio.h>

int main()
{
    int a,b,i,j,sum=0,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);

        if(a%2==0)
            a++;

        for(j=0; j<b; j++)
        {
            if(a%2!=0)
            {
                sum=sum+a;
                a=a+2;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}

