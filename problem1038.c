#include<stdio.h>

int main()
{
    int code,quantity;
    float item1=4.00,item2=4.50,item3=5.00,item4=2.00,item5=1.50;

    scanf("%d %d",&code,&quantity);

    if(code==1)
    {
        printf("Total: R$ %.2f\n",item1*quantity);
    }
    else if(code==2)
    {
        printf("Total: R$ %.2f\n",item2*quantity);
    }
    else if(code==3)
    {
        printf("Total: R$ %.2f\n",item3*quantity);
    }
    else if(code==4)
    {
        printf("Total: R$ %.2f\n",item4*quantity);
    }
    else if(code==5)
    {
        printf("Total: R$ %.2f\n",item5*quantity);
    }

    return 0;
}
