#include <stdio.h>
int main (int argc, const char* argv[])
{
    float fa1[2][5] = { {0.1, 2.3, 4.5, 6.7, 8.9}, {10, 12, 14, 16, 18} };
    float (*pfa1)[5] = &fa1[0];
    float (*pfa2)[] = &fa1[1]; // 这里有所不同, 并没有在最后的维度上标出来最后一个维度的大小.  
    printf("%f\n", fa1[1][1]);
    printf("%f\n", *(*(pfa1+1)+1));
    printf("%f\n", *(*(pfa2)+1));
    return 0;
}
