#include<stdio.h>

int main()
{
    int age,i,count=0,sum=0;
    float avg;

    while(1)
    {
        scanf("%d",&age);

        if(age<0)
            break;

        else
        {
            sum=sum+age;
            count++;
        }
    }

    avg=(float)sum/count;
    printf("%.2f\n",avg);

    return 0;
}

