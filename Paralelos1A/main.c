#include <stdio.h>
#include <stdlib.h>

#define  TAM 5

int mostrarEnteros(int vec[],int tam);
int mostrarFlotantes(float vec[],int tam);

///tarea
int ordenarPromedios(int numeroUno, int numero2, float proms, int tam);
int ordenarPromediosAscendentes(int numeroUno[], int numeroDos[], float proms[], int tam);
int ordenarPromediosDescendentes(int numeroUno[], int numeroDos[], float proms[], int tam);
///fin tarea

int listarNotas(int nota1[], int nota2[], float promedios[],int tam);


//https://www.onlinegdb.com/I-3eIuZqe
int main()
{
    int notasUno[TAM]= {6,7,2,10,10};
    int notasDos[TAM]= {8,2,4,6,10};
    float promedios[TAM];


    for(int i=0; i<TAM;i++)
    {
        //printf("Ingrese notas Primer Parcial:\n");
        //scanf("%d",&notasUno[i]);
        //printf("alumno: %d, nota: %d ",i,notasUno);
        //printf("Ingrese notas Segundo Parcial:\n");
        //scanf("%d",&notasDos[i]);

        promedios[i]= (float)(notasUno[i] + notasDos[i]) /2;

    }

    listarNotas(notasUno,notasDos,promedios,TAM);


    return 0;
}

int listarNotas(int nota1[], int nota2[], float promedios[],int tam)
{
    int todoOk=0;

    if(nota1!=NULL && nota2!=NULL && promedios!=NULL && tam>0)
    {
        system("pause");
        printf("\n\n****LISTADO DE NOTAS****\n\n");
        printf("  PARCIAL 1   PARCIAL 2   PROMEDIOS \n");

        for(int i=0;i<tam;i++)
        {
            printf("    %02d           %02d         %5.2f\n",nota1[i], nota2[i], promedios[i]);
        }
        printf("\n\n");

        todoOk=1;

    }

    return todoOk;
}

int ordenarPromediosAscendentes(int numeroUno[], int numeroDos[], float proms[], int tam)
{
    int todoOk=0;
    int aux;
    int i,j;

    if( numeroUno!= NULL && numeroDos!= NULL && proms!= NULL && tam>0)
    {
        system("pause");
        printf("\n\n****LISTADO DE NOTAS****\n\n");
        printf("  PARCIAL 1   PARCIAL 2   PROMEDIOS \n");

        for(i=0; i < tam -1; i++)//arranca de 0 hasta el anteultimo.flecha verde
        {
            for(j=0; j < tam; j++)//arranca del 1 al ultimo.flecha azul
            {
                if( numeroUno[i] > numeroUno[j])//criterio de ordenamiento. cuando los quiero swapear y ordenar
                {
                    aux = numeroUno[i];
                    numeroUno[i] = numeroUno[j];
                    numeroUno[j] = aux;

                    printf("    %02d           %02d         %5.2f\n",numeroUno[j], numeroDos[j], proms[j]);
                }
            }
        }
        printf("\n\n");

        todoOk=1;
    }

    return todoOk;



}

int mostrarEnteros(int vec[],int tam)
{
    int todoOk=0;

    if(vec!=NULL && tam > 0)
    {
        for(int i=0; i<tam; i++)
        {
        printf("%d ",vec[i]);
        }
    }

    printf("\n\n");

    return todoOk;
}

int mostrarFlotantes(float vec[],int tam)
{
    int todoOk=0;

    if(vec!=NULL && tam > 0)
    {
        for(int i=0; i<tam; i++)
        {
        printf("%.2f ",vec[i]);
        }
    }

    printf("\n\n");

    return todoOk;


}
