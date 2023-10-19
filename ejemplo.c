#include <stdio.h>
int suma(int a, int b)
{
    int res=a+b;
    return res;
}

void main()
{
    int num1,num2,resultado=0;
    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);
        printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);
    resultado=suma(num1,num2);
    printf("Resultado %d",resultado);
    //return 0;
}
