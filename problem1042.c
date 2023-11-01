#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    if(x<y && y<z && y<z)
    {
        printf("%d\n%d\n%d\n",x,y,z);
    }
    else if(x<y && x<z && x<z)
    {
        printf("%d\n%d\n%d\n",y,x,z);
    }
    else if(z<x && z<y && y<x)
    {
        printf("%d\n%d\n%d\n",z,y,x);
    }
    printf("\n");


    if(x>y && y>z && y>z)
    {
        printf("%d\n%d\n%d\n",x,y,z);
    }
    else if(x>y && x>z && x>z)
    {
        printf("%d\n%d\n%d\n",y,x,z);
    }
    else if(z>x && z>y && y>x)
    {
        printf("%d\n%d\n%d\n",z,y,x);
    }

    return 0;
}

