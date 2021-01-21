#include "darts.h"
#include <math.h>

int score(coordinate_t test)
{
    float var01 = 0;
    var01 = pow(test.x, 2) + pow(test.y, 2);
    var01 = sqrt(var01);

    if (var01 <= 1.0)
    {
        return 10;
    }
    else if (var01 >= 1.1 && var01 <= 5.0)
    {
        return 5;
    }else if(var01 <= 10.0 && var01 >= 5.1){
        return 1;
    }

    return 0;
}