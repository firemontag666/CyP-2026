#include <stdio.h>

int main() {
    char input[100],r;
    int clave;
    printf("mensaje: ");
    fgets(input,sizeof(input),stdin);
    printf("clave: ");
    scanf("%d", &clave);
    for (int i=0; input[i] != '\0';++i){
        r=input[i];
        if (r==' ')
        {
            r='=';
        }
        r = (r + 'A' - clave) % 26 + 'A';
        input[i]=r;
    }
    printf("salida: %s", input);
    return 0;
}