# QuakeHash
![QuakeHash Logo](https://repository-images.githubusercontent.com/739806114/80f79a99-90b0-4868-ba66-0d754e4d4d64)

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

The return value data type is `uint32_t`.

It returns the 32-bit unsigned integer hash digest result.

## Support
QuakeHash was designed and developed by [Wil Parsons](https://github.com/wilparsons).

I'm available for freelance work to extend, implement or modify QuakeHash and other algorithms.
