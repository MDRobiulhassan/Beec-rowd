#include<stdio.h>

int main()
{
    int a,i,j,sum=0;

    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;

        if(a%2!=0)
            a++;

        for(j=0; j<5; j++)
        {
            if(a%2==0)
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


