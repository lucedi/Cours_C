#include <stdio.h>

int main(void){
    float premier_nombre;
    float deuxieme_nombre;
    float troisieme_nombre;

    printf("Entrez le premier nombre :");
    scanf("%f", &premier_nombre);
    printf("Entrez le deuxieme nombre :");
    scanf("%f", &deuxieme_nombre);
    printf("Entrez le troisieme nombre :");
    scanf("%f", &troisieme_nombre);
    printf("La moyenne est : %.2f\n", (premier_nombre + deuxieme_nombre + troisieme_nombre)/3);
    return 0;

}