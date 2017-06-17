#include <stdio.h>
#include <stdlib.h>

void equis (int dim);

int main()
{
    int numero;

        while(numero!=0){

            puts("Digite dimension de la X  (0 para terminar):\n");
            scanf("%d",&numero);

            while(numero<0 || numero>20)
            {
                    if(numero<0){

                puts("No pueden numeros negativos \n");
                break;

                printf("Digite dimension de la X  (0 para terminar):\n");
                scanf("%d",&numero);

            }
            if(numero>20)
            {
                puts("No debe ser mayor que 20");
                puts("Digite dimension de la X  (0 para terminar):\n");
                scanf("%d",&numero);

            }
            }

        equis(numero);

                        }
}


void equis(int dim)
{

    int fila,column;
    for( fila=1; fila<=dim; fila++)
    {
        for(column=1; column<=dim; column++)
        {
            if(fila==column || column==(dim+1)-fila) printf("*");

                else printf(" ");
        }
            printf("\n");

    }
}
