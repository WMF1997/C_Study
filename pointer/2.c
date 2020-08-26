#include <stdio.h>
int main (int argc, const char* argv[])
{
    float f1 = 2.3;
    float f2 = 3.4;  // 实际上, 这些单独变量的存储位置是"独立分配"的, 并不是连续的吧. 
    float *pf;
    pf = &f1;
    printf("%.4f\n", *(pf+(&f2-&f1)));  // 的确是有点多此一举啦~
    printf("%.4f\n", *(&f1));  // 这个更是废话。
    return 0x0;
}