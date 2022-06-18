#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char marca[20];
    char modelo[20];
    int capacidad;

}ePendrive;

/** \brief constructor que me consigue espacio en memoria e inicializa los campos en cero
 *
 * \return ePendrive* puntero a ePendrive
 *
 */
ePendrive* new_pendrive();

int main()
{
    int tam=5;
    int* pAuxInt=NULL;
    int* vectorDinamico


    return 0;
}

ePendrive* new_pendrive()
{

     ePendrive* nuevoPendrive = (ePendrive*) calloc(1,sizeof(ePendrive));

     return nuevoPendrive;
}
