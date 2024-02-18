# QuakeHash
![QuakeHash Logo](https://repository-images.githubusercontent.com/739806114/8f77dd5a-97dc-4643-8dac-a05da569ee6e)

## Description
QuakeHash is a 32-bit, non-cryptographic hashing algorithm.

Read [this article](https://medium.com/@wilparsons/quakehash-is-a-new-32-bit-hashing-algorithm-with-low-collisions-and-good-bit-distribution-b2ad6aedeb09) for an in-depth explanation.

## Usage
``` c
#include <stdio.h>
#include "quakehash.h"

int main(void) {
  const char *input_1 = "message_1";
  const char *input_2 = "message_2";
  uint32_t entropy = 1111111111;

  entropy = quakehash(input_1, entropy);
  entropy = quakehash(input_2, entropy);
  printf("0x%08X\n", entropy);
  return 0;
}
```

## Reference
#### `quakehash()`
This is the hashing function that accepts the 2 following arguments.

`input` is the null-terminated `char` string to hash.

`entropy` is the 32-bit unsigned integer seed initialized with `1111111111`.

It returns the 32-bit unsigned integer hash digest result.

## Support
QuakeHash was designed and developed by [Wil Parsons](https://wilparsons.com/).

I'm available for freelance work to extend, modifify or implement QuakeHash and other algorithms.