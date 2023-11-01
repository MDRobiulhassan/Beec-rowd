#include<stdio.h>

int main()
{
    int N,hour,minute,second,reminder;

    scanf("%d",&N);

    hour=N/3600;
    reminder=N%3600;
    N=reminder;
    reminder=reminder%60;
    minute=N/60;
    second=reminder;

    printf("%d:%d:%d\n",hour,minute,second);

    return 0;
}

