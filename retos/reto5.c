#include <stdio.h>

int main(void){
    int p,comp,rp;
    printf("total de pulsos: ");
    scanf("%d",&p);
    comp = p/4;
    rp = p%4;
    printf("%d compases y %d pulsos",comp,rp);
    return 0;
};