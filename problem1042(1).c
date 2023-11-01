#include<stdio.h>

int main()
{
    int a,b,c,num[3],i,j;
    scanf("%d %d %d",&a,&b,&c);

    num[0]=a;
    num[1]=b;
    num[2]=c;

    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(num[j]>num[i])
            {
                int t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
    }

    printf("%d\n%d\n%d\n", num[0], num[1], num[2]);
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}

