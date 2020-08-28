#include <stdio.h>
float f(float x)
{
    float z = x * x;
    float z1 = z + 1;
    return z1;
}

int main (int argc, const char* argv[])
{
    float x = 2.33;
    float y = x * x;
    float y1 = y + 1;
    float z1 = f(x);
    printf ("y1=%.4f, z1=%.4f\n", y1, z1);
    return 0;
}