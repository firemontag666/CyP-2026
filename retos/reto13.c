#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100],r;
    int clave;
    printf("entrada: ");
    scanf("%s %d", input, & clave);
    for (int i=0; input[i] != '\0';++i){
        r=input[i];
        r = (r - 'A' + clave) % 26 + 'A';
        input[i]=r;
    }
    printf("salida: %s", input);
    return 0;
}