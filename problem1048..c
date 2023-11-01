#include<stdio.h>

int main()
{
    float salary=0,newsalary=0;
    scanf("%f",&salary);

    if(salary>=0 && salary<=400.00)
    {
        newsalary=salary+salary*0.15;
        printf("Novo salario: %.2f\n",newsalary);
        printf("Reajuste ganho: %.2f\n",newsalary-salary);
        printf("Em percentual: 15 %%\n");
    }

    else if(salary>=400.01 && salary<=800.00)
    {
        newsalary=salary+salary*0.12;
        printf("Novo salario: %.2f\n",newsalary);
        printf("Reajuste ganho: %.2f\n",newsalary-salary);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>=800.01 && salary<=1200.00)
    {
        newsalary=salary+salary*0.1;
        printf("Novo salario: %.2f\n",newsalary);
        printf("Reajuste ganho: %.2f\n",newsalary-salary);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>=1200.01 && salary<=2000.00)
    {
        newsalary=salary+salary*0.07;
        printf("Novo salario: %.2f\n",newsalary);
        printf("Reajuste ganho: %.2f\n",newsalary-salary);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>2000.00)
    {
        newsalary=salary+salary*0.04;
        printf("Novo salario: %.2f\n",newsalary);
        printf("Reajuste ganho: %.2f\n",newsalary-salary);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}

