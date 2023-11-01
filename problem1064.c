#include<stdio.h>

int main()
{
    float num,avg=0,sum=0;
    int i,count=0;

    for(i=1;i<=6;i++)
    {
        scanf("%f",&num);
        if(num>0)
        {
            count++;
            sum=sum+num;
        }
    }

    printf("%d valores positivos\n",count);

    avg=sum/count;
    printf("%.1f\n",avg);

    return 0;
}

