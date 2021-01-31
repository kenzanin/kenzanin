#include "rna_transcription.h"
#include "stdlib.h"
#include "string.h"

char *to_rna(const char *dna) {
  static char *var;
  var = malloc(strlen(dna));
  memset(var, 0, strlen(dna));
  int i = 0;
  for (i = 0; i < (int)strlen(dna); i++) {
    char *var01 = 0;
    switch (dna[i]) {
    case 'C':
      var01 = "G";
      break;
    case 'G':
      var01 = "C";
      break;
    case 'T':
      var01 = "A";
      break;
    case 'A':
      var01 = "U";
      break;
    }
    strcat(var, var01);
  }

  return var;
}
