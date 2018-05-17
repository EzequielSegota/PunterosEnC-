#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero;
    int numero;
    numero=66;
    punteroNumero=&numero;
    //*punteroNumero=&numero;
    //*punteroNumero=55;
    printf("%d\n",numero);//valor de numero
    printf("%d\n",&numero);//le pasamos donde empieza el elemento
    printf("%d\n",punteroNumero);
    printf("%d",&punteroNumero);//direccion donde esta guardado el puntero
    //printf("%d",*punteroNumero);

    return 0;
}
