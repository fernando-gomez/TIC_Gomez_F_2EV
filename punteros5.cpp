#include<stdio.h>

int main(){
    char palabra1[5];
    char palabra2[5];
    int salir;
    printf("Dime algo: ");
    scanf("%s",palabra1);
    printf("\nDime algo mas: ");
    scanf("%s",palabra2);
    printf("palabra1=%s\n",palabra1);
    printf("direccion de palabra1 = %x\n", palabra1);
    printf("palabra2=%s\n",palabra2);
    printf("direccion de palabra2 = %x\n", palabra2);
    scanf("%i",&salir);
}
