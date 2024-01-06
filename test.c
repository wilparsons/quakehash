#include <stdio.h>
#include "entro-hash.h"

int main(void) {
  const char *input_1 = "message_1";
  const char *input_2 = "message_2";
  uint32_t entropy = 0;

  entropy = entro_hash(input_1, entropy);
  entropy = entro_hash(input_2, entropy);
  printf("0x%08X\n", entropy);
  return 0;
}
