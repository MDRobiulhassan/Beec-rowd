#include<stdio.h>

int main()
{
    int num[100],i,max,count=1;

    for(i=0;i<100;i++)
    {
        scanf("%d",&num[i]);
    }

    max=num[0];
    for(i=0;i<100;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }

    for(i=0;i<100;i++)
    {
        if(max==num[i])
            break;

        count++;
    }

    printf("%d\n",max);
    printf("%d\n",count);

    return 0;
}
