#include "resistor_color_duo.h"

int color_code(resistor_band_t *test){
    return (test[0]*10+test[1]);
}