#include<stdio.h>

int main()
{
    int startday,endday,starthour,endhour,startmin,endmin,startsec,endsec,day,hour,min,sec;
    scanf("%d",&startday);
    scanf("%d %d %d",&starthour,&startmin,&startsec);
    scanf("%d",&endday);
    scanf("%d %d %d",&endhour,&endmin,&endsec);

    day=endday-startday;

    if(starthour==endhour)
        hour=24-starthour+endhour;
    else if(starthour<=endhour)
        hour=endhour-starthour;
    else
        hour=24-starthour+endhour;

    if(startmin==endmin)
        min=0;
    else if(startmin>endmin)
        min=startmin-endmin;
    else if(startmin<endmin)
        min=endmin-startmin;

    if(startmin==endsec)
        sec=0;
    else if(startsec>endsec)
        sec=startsec-endsec;
    else if(startsec<endsec)
        sec=endsec-startsec;

    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hour);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);

    return 0;
}

