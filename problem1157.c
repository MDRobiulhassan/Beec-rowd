#include<stdio.h>

int main()
{
    int n,reminder,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        reminder=n%i;
        if(reminder==0)
            printf("%d\n",i);
    }

    return 0;
}

