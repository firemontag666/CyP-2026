#include <stdio.h>

int main(void){
    float m,mmol,l,molaridad;
    printf("masa, masa molar y litros: ");
    scanf("%f %f %f",&m,&mmol,&l);
    molaridad = (m/mmol)/l;
    printf("Molaridad = %.2f M\n",molaridad);
    return 0;
};