# QuakeHash
![QuakeHash Logo](https://repository-images.githubusercontent.com/739806114/80f79a99-90b0-4868-ba66-0d754e4d4d64)

## Description
QuakeHash is a 32-bit, non-cryptographic hashing algorithm.

Read [this article](https://medium.com/@wilparsons/quakehash-is-a-new-32-bit-hashing-algorithm-with-low-collisions-and-good-bit-distribution-b2ad6aedeb09) for an in-depth explanation.

## License
QuakeHash is subject to the software licensing terms from the [LICENSE file](https://github.com/williamstaffordparsons/quakehash/blob/master/LICENSE).

## Reference
#### `quakehash()`
This is the hashing function that accepts the 2 following arguments.

`input` is the null-terminated `char` string to hash.

`entropy` is the 32-bit unsigned integer seed initialized with `1111111111`.

The return value data type is `uint32_t`.

It returns the 32-bit unsigned integer hash digest result.

## Usage
``` c
#include "quakehash.h"

int main(void) {
  const char *input_1 = "message_1";
  const char *input_2 = "message_2";
  uint32_t entropy = 1111111111;

  entropy = quakehash(input_1, entropy);
  entropy = quakehash(input_2, entropy);
  return 0;
}
```
