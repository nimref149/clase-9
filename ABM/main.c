
#include <stdlib.h>
#include "Empleado.h"

#define T 10

void compararLegajo(eEmpleado lista[T],int tam);
int menuDeOpciones(char[]);


int main()
{

    int indice;
    int opcion;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


hardcodearDatosEmpleados(lista,4);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista, 6);
            break;
            case 3:
                compararLegajo(lista,T);
                break;
            case 4:
                mostrarListaEmpleados(lista, T);
                break;

        }
    }while(opcion!=5);



    //inicializarEmpleados(lista, T);




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
/*
void compararLegajo(eEmpleado lista[T],int tam)
{
int opcion=0;
int i;
printf("Ingresar legajo");
scanf("%d",&opcion);
for(i=0;i<T;i++){

if(opcion==lista[i].legajo){
printf("Modificar sueldo bruto: ");
scanf("%f", &lista[i].sueldoBruto);
printf("Sueldo mofificado");
}
if(opcion!=lista[i].legajo){
printf("No existe el legajo");
}
}

}*/
void compararLegajo(eEmpleado lista[T],int tam){
int i;
int loEncontro=0 ;
printf("Ingrese legajo: ");
scanf("%d",&legajo);
for(i=0;i<tam;i++){
if(legajo == lista[i].legajo){
   printf("Lo encontro");
   loEncontro=1;
   break;
}



}
if(loEncontro==0)




}








//modificar sueldo bruto
