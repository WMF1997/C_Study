#include <stdio.h>
#include "2.h"

int main (int argc, const char* argv[])
{
    float x = 3.3, y = 4.4, *px = &x, *py = &y;
    swap(px, py);
    printf("%f, %f\n", *px, *py);
    return 0;
}