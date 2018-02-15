//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>//MALLOC  

int main(){
     char *lista[3]; //3 posiciones de memoria *puntero a char que es una letra
     int salir;
     lista[0]=(char *) malloc(8*sizeof(char)); 
     lista[1]=(char *) malloc(7*sizeof(char));
     lista[2]=(char *) malloc(9*sizeof(char)); 
     printf("\nPrimer rey mago: ");
     scanf("%s",lista[0]); //
     printf("\nSegundo rey mago: ");
     scanf("%s",lista[1]);
     printf("\nTercero rey mago: ");
     scanf("%s",lista[2]);
     printf("\nLos tres reyes magos son:  ");
     printf("%s, ",lista[0]);
     printf("%s y ",lista[0]);
     printf("%s.",lista[0]);
     printf("\nPOSICIONES DE MEMORIA: ");
     printf("\n%s: ",lista[0]);
     printf("%x",lista[0]);
     printf("\n%s: ",lista[1]);
     printf("%x",lista[1]);
     printf("\n%s: ",lista[2]);
     printf("%x",lista[2]);
     printf("\nPulse cualquier letra para salir: ");
     scanf("%i", salir);
}
