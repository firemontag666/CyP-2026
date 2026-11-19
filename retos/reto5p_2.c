#include <stdio.h>
#define n 6

int main() {
    int vueltas[n];
    float promedio, sum;
    for (int i = 0; i < n; i++)
    {
       printf("tiempos vuelta %d: ",i+1);
       scanf("%d", &vueltas[i]);
    }
    for (int i = 0; i < n; i++)
    {
       sum=sum+vueltas[i];
    }
    promedio=sum/n;
    printf("Promedio: %.1f", promedio);

    return 0;
}