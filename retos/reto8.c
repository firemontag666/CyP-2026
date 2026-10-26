#include <stdio.h>
#include "stdlib.h"

int main(void){
    float L;
    printf("entrada: ");
    scanf("%f",&L);
    if (L>0){
        printf("salida: Hemisferio norte");
    }else if (L==0){
        printf("salida: En el ecuador");
    } else if (L<0) {
        printf("salida: Hemisferio sur");
    } else {
        printf("input invalido");
    }
    return 0;
};