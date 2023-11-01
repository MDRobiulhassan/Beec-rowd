#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C,R1,R2,root;

    scanf("%f %f %f",&A,&B,&C);

    root=(B*B)-(4*A*C);

    if(A==0 || root<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1=(-B+sqrt(root))/(2*A);
        R2=(-B-sqrt(root))/(2*A);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);


    }

    return 0;
}

