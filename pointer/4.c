#include <stdio.h>
int main (int argc, const char* argv[])
{
    float fa1[3] = {2.3, 3.4, 4.5};
    float *pfa1 = fa1;  // 这里写成&fa1也没事, 会有warning
    printf("%f\n", *(pfa1++));  // 2.3
    printf("%f\n", *(++pfa1));  // 4.5
    return 0;
}