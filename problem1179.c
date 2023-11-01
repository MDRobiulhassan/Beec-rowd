#include<stdio.h>

int main()
{
    int n,a[5],b[5],i,j,c=0,d[20],e[20];

    for(i=0; i<15; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            a[i]=n;
            printf("par[%d] = %d\n",c,a[i]);
        }
        if(n%2!=0)
        {
            b[i]=n;
            printf("impar[%d] = %d\n",c,b[i]);
        }

        c++;

        if(c==5)
        {
            c=0;
            for(j=0;j<5;j++)
            {
                a[j]=0;
                b[j]=0;
            }
        }
    }


    return 0;
}

