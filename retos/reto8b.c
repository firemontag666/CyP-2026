#include <stdio.h>

int main() {
  float L;       
  char input[100];  

  printf("entrada: ");

  while (fgets(input, sizeof(input), stdin)) {
    
    if (sscanf(input, "%f", &L) == 1) {
      break; 
    } else {
      printf("Error, intenta denuevo: "); 
    }
  }

  if (L>0){
        printf("salida: Hemisferio norte");
    }else if (L==0){
        printf("salida: En el ecuador");
    } else if (L<0) {
        printf("salida: Hemisferio sur");
    }
    return 0;
}