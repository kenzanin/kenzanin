#include "nucleotide_count.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A C G T

char *count(const char *dna_strand) {
  char *var=malloc(50);
  memset(var, 0, 50);

  int a = 0;
  int c = 0;
  int g = 0;
  int t = 0;
  int i;
  for (i = 0; i < (int)strlen(dna_strand); i++) {
    switch (dna_strand[i]) {
    case 'A':
      a++;
      break;
    case 'C':
      c++;
      break;
    case 'G':
      g++;
      break;
    case 'T':
      t++;
      break;
    default:
      strcpy(var, "");
      return var;
    }
  }

  sprintf(var, "A:%d C:%d G:%d T:%d", a, c, g, t);

  return var;
}
