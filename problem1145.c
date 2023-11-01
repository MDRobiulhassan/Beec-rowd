#include<stdio.h>

int main()
{
    int X,Y,i,j;
    scanf("%d %d",&X,&Y);

    for(i=1; i<=Y; i=i+4)
    {
        for(j=1; j<=X; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}



