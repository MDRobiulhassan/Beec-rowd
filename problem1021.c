#include<stdio.h>
#include<math.h>

int main()
{
    double amount;
    int intpart = (int)amount;
    double decpart = amount - intpart;
    printf("Num = %f, intpart = %d, decpart = %f\n", num, intpart, decpart);


    scanf("%lf",&amount);

    printf("NOTAS:\n");

    reminder=amount%100; //76
    amount=amount/100; //5
    printf("%d nota(s) de R$ 100,00\n",amount);

    amount=reminder/50; //1
    reminder=reminder%50; //26
    printf("%d nota(s) de R$ 50,00\n",amount);

    amount=reminder/20;
    reminder=reminder%20;
    printf("%d nota(s) de R$ 20,00\n",amount);

    amount=reminder/10;
    reminder=reminder%10;
    printf("%d nota(s) de R$ 10,00\n",amount);

    amount=reminder/5;
    reminder=reminder%5;
    printf("%d nota(s) de R$ 5,00\n",amount);

    amount=reminder/2;
    reminder=reminder%2;
    printf("%d nota(s) de R$ 2,00\n",amount);

    printf("MODEAS:\n");

    amount=reminder/1;
    reminder=reminder%1;
    printf("%d nota(s) de R$ 1,00\n",amount);

    return 0;
}


