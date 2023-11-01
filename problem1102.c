#include<stdio.h>

int main()
{
    int i,X,Y;

    for(i=1;i<10;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X==Y)
            break;
        if(X>Y)
            printf("Decrescente\n");
        else if(X<Y)
            printf("Crescente\n");

    }

    return 0;
}

