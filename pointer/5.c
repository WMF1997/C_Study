#include <stdio.h>
int main (int argc, const char* argv[])
{
    float fa1[2][5] = { {0, 2, 4, 6, 8}, {10, 12, 14, 16, 18} };
    float (*pfa)[5] = &fa1[0];
    printf ("%f\n", *(*(pfa+1)+1));
    return 0;
}
