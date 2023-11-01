#include<stdio.h>

int main()
{
    int n,a=0,g=0,d=0;

    printf("MUITO OBRIGADO\n");

    while(1)
    {
        scanf("%d",&n);

        if(n==1)
            a++;
        else if(n==2)
            g++;
        else if(n==3)
            d++;
        else if(n==4)
            break;
        else
            continue;
    }

    printf("Alcohol: %d\n",a);
    printf("Gasoline: %d\n",g);
    printf("Diesel: %d\n",d);

    return 0;
}

