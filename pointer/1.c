#include <stdio.h>
int main (int argc, const char* argv[])
{
    float f = 2.33;
    float *pf = &f;
    printf("%.4f\n", *pf);
    *pf = 4.13;
    printf("%.4f\n", *pf);
    return 0x0;
}