#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate)
{
    if (candidate < 10)
        return 1;

    int count = 1;
    int var01 = candidate;
    while (var01 > 10)
    {
        var01 /= 10;
        count++;
    }

    var01 = candidate;
    int var02 = 0;
    int i;
    for (i = 0; i <= count; i++)
    {
        var02 += (pow((var01 % 10), count));
        var01 /= 10;
    }

    return (var02 == candidate);
}
