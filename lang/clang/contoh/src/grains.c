#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index) {
  if (index > 64 || index < 1)
    return 0;

  int i = 0;
  uint64_t var = 1;
  for (i = 1; i < index; i++) {
    var *= 2;
  }
  return var;
}

uint64_t total(void) {
  uint64_t var = 0;

  int i = 0;
  for (i = 1; i <= 64; i++) {
    var += square(i);
  }
  return var;
}