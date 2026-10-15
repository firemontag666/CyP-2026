#include <stdio.h>

int main(void)
{
    float c = 36.5f;
    float f = c * 9.0f / 5.0f + 32.0f;

    printf("%.1f C = %.1f F\n", c, f);
    return 0;
}