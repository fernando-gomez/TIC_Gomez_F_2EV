#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
    l++;
    }
    return l;
    }
int main(){
     char *lista[5];
     int salir;
     char *paux;
     char aux[15];
     int cont;
     int l;
     for(cont=0;cont<5;cont++){
         printf("\nNombre amigo %i: ",cont+1);
         scanf("%s",aux);  
         l=medida(aux);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],aux);
     }
     printf ("\n\n LISTA NO OREDENADA: ");
     for(cont=0;cont<5;cont++){
     printf("%s", lista[cont]);
          }
     //ORDENAMIENTO
     for(cont=0;cont<4;cont++){
         if(*lista[cont]>*lista[cont+1]){
         paux=lista[cont];
         lista[cont]=lista[cont+1];
         lista[cont+1]=paux;
                                }
                               }
     printf ("\n\n LISTA OREDENADA: ");
     for(cont=0;cont<5;cont++){
     printf("%s", lista[cont]);
          }
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
