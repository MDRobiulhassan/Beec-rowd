#include<stdio.h>

int main()
{
    float N1,N2,N3,N4,N5,average,average2,average3;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    scanf("%f",&N5);

    average=(N1+N2+N3+N4)/4;
    printf("MEDIA: %.1f\n",average);

    if(average>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(average<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(average>=5.0 || average<=6.9)
    {
        printf("Aluno em exame.\n");
    }


    return 0;
}

