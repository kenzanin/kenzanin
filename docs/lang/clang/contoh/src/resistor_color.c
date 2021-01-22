#include "resistor_color.h"

resistor_band_t *colors(void)
{
    static resistor_band_t var01[] = {BLACK,
                                      BROWN,
                                      RED,
                                      ORANGE,
                                      YELLOW,
                                      GREEN,
                                      BLUE,
                                      VIOLET,
                                      GREY,
                                      WHITE};
    return var01;
}

int color_code(resistor_band_t test)
{
    return test;
}