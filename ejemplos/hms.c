#include <stdio.h>

int main(void)
{
    int total, h, m, s;

    printf("Segundos: ");
    scanf("%d", &total);
    h = total/3600;
    m = (total%3600)/60;
    s = total%60;

    printf("%d S= %d h %d min %d s\n", total, h, m, s);
    return 0;
}