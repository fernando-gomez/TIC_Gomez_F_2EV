#include<stdio.h>

int main(){
    char palabra1[5];
    char palabra2[5];
    int salir;
    printf("Dime algo: ");
    scanf("%s",palabra1);
    printf("\nDime algo mas: ");
    scanf("%s",palabra2);
    printf("letra palabra1=%c\n",*(palabra1+3));
    printf("direccion de palabra1 = %x\n", palabra1);
    printf("letra palabra2=%c\n",*(palabra2+4));
    printf("direccion de palabra2 = %x\n", palabra2);
    scanf("%i",&salir);
}
