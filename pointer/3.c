#include <stdio.h>
int main (int argc, const char* argv[])
{
    float fa[3] = {4.13, 5.4, 6.66};
    float *pfa = fa;
    printf("%.4f\n", *(pfa));
    for (int i = 1; i < 3; i++)
    {
        printf("%.4f\n", *(pfa+i));
    }
    return 0;  // 之前写的是0x0, 是因为公主连结里面的可可萝的表情包...
}
