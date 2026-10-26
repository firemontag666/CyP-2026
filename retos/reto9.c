#include <stdio.h>

int main() {
    float p,i,h,pr;    
    printf("gramos de harina en la receta: ");
    scanf("%f",&h);
    printf("para cuantas personas es la receta: ");
    scanf("%f",&pr);
    printf("cuantas personas vienen: ");
    scanf("%f",&p);
    i=p*(h/pr);
    if (i<=1000)
    {
        printf("salida: %.0f g",i);
    } else {
        printf("salida: Usa dos tazones");
    }
    return 0;
}