#include<stdio.h>

int main()
{
    int time,year,months,day,reminder;

    scanf("%d",&time); //400

    year=time/365; //1
    reminder=time%365; //35
    months=reminder/30; //1
    reminder=reminder%30; //5
    day=reminder; //5

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",day);

    return 0;
}

