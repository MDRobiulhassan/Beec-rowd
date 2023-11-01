#include<stdio.h>

int main()
{
    int i,j;

    for(i=1,j=7;i<=3,j>=5;i=i,j=j-1)
    {
        printf("I=%d J=%d\n",i,j);
    }
    for(i=3,j=9;i<=3,j>=7;i=i,j=j-1)
    {
        printf("I=%d J=%d\n",i,j);
    }
    for(i=5,j=11;i<=3,j>=9;i=i,j=j-1)
    {
        printf("I=%d J=%d\n",i,j);
    }
    for(i=7,j=13;i<=3,j>=11;i=i,j=j-1)
    {
        printf("I=%d J=%d\n",i,j);
    }
    for(i=9,j=15;i<=3,j>=13;i=i,j=j-1)
    {
        printf("I=%d J=%d\n",i,j);
    }

    return 0;
}



