#include <stdio.h>
#include <math.h>

int main(void){
    float t,m,a=9.8,h,Ec;
    scanf("%f %f",&t,&m);
    h = 0.5*(a)*pow(t,2);
    Ec = 0.5*m*pow(a*t,2);
    printf("h = %.1f m \nEc = %.1f J",h,Ec);
    return 0;
};