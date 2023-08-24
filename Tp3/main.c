#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *valores;
    int posTope; //posici�n de nuevo tope, lugar en donde se almacenar� el nuevo valor
} Pila;

int main()
{
    printf("Hello world!\n");
    Pila A;
    inicpila(&A);
    apilar(&A, 6);
    int dato = tope(&A);
    mostrar(&A);
    return 0;
}

void inicpila(Pila * A)
{
    A->posTope = 0;
    A->valores= (Pila*)malloc((A->posTope)*(sizeof(Pila)));
}

void apilar(Pila * A, int dato)
{
    A->valores[A->posTope] = dato;
    A->posTope = A->posTope + 1;
}

void leer(Pila * A)
{
    int dato = 0;
    printf("Ingrese el numero a apilar: \n");
    scanf("%i", &dato);
    apilar(A, dato);
}

int desapilar(Pila * A)
{
    int tope = -1;
    if(A->posTope > 0)
    {
        tope = A->valores[(A->posTope)-1];
        A->posTope = A->posTope - 1;

    }
    else
    {
        printf("La pila esta vacia. \n");
    }
    return tope;
}

int tope(Pila * A)
{
    int tope = -1;
    if(A->posTope > 0)
    {
        tope = A->valores[(A->posTope) -1];
    }
    else
    {
        printf("La pila esta vacia. \n");
    }
    return tope;
}

void mostrar(Pila * A)
{
    int i = 0;
    printf("BASE --------------------tope \n\n");

    while(i < A->posTope)
    {

        printf(" %i ", A->valores[i]);
        i++;
    }

    printf("\n\nTOPE --------------------tope \n");
}

int pilavacia(Pila * A){
    int flag = 0;
    if(A->posTope == 0){
        flag = 1;
    }
    return flag;
}
