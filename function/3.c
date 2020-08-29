#include <stdio.h>

// this is an example
float max_0(float* input_arr, int N)
{
    float current_max = *input_arr;
    for (int i=0; i<N; i++)
        current_max = (*(input_arr + i) > current_max) ? (*(input_arr + i)) : (current_max);  // 采用保守治疗的方法. 
    return current_max;
}

float* max_1 (float* input_arr, int N)
{
    int rel = 0;
    float current_max = *input_arr;
    for (int i=1; i<N; i++)
    {
        if ( *(input_arr + i) > current_max)
        {
            current_max = *(input_arr + i);
            rel = i;
        }
    }
    return input_arr + rel;
}

int main (int argc, const char** argv[])
{
    float a[5] = { 0, 222, 99, 1, 3 };
    float* ptr_max = max_1(a, 5);
    float my_max = max_0(a, 5);
    float* (*ptr_func_max)(float* fuck_input_ptr, int NMSL);
    ptr_func_max = max_1;
    printf("%f\n", *ptr_max);
    printf("%f\n", my_max);
    float* ptr_max_1 = (*ptr_func_max)(a, 5);
    printf("%f\n", *ptr_max_1);
    return 0;
}