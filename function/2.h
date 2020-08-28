#pragma once
#ifndef _FUNCTION_2_H
#define _FUNCTION_2_H
// ADD YOUR FUNCTIONS HERE. 

// void swap(int x, int y)
// {
//     int temp;
//     temp = x; x = y; y = temp;
//     return;
// }

void swap(float* x, float* y)
{
    int temp;
    temp = *x; *x = *y; *y = temp;
    return;
}


#endif