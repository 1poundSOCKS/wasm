#include <stdio.h>

extern "C"
{
    int Sum(int a, int b)
    {
        return a + b;
    }
}
