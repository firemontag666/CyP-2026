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
        r = (r - 'A' + clave) % 26 + 'A';
        input[i]=r;
        if (input[i]=='=')
        {
            input[i]=' ';
        }
        
    }
    printf("salida: %s", input);
    return 0;
}