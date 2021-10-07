#define LIB_EXPORT
#include "sumNumLib.h"
int sumNum(int a)
{
    if (a < 0)  a = -a;
    int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}