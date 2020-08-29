#include <stdio.h>

// this is an example
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
    printf("%f\n", *ptr_max);
    return 0;
}