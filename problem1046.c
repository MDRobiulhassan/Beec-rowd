#include<stdio.h>

int main()
{
    int start,end,duration;
    scanf("%d %d",&start,&end);

    if(start==end)
        printf("O JOGO DUROU %d HORA(S)\n",24-start+end);
    else if(start<=end)
        printf ("O JOGO DUROU %d HORA(S)\n",end-start);
    else
        printf("O JOGO DUROU %d HORA(S)\n",24-start+end);

    return 0;
}

