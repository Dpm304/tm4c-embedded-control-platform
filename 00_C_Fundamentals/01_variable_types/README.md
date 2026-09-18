# 01 - Variable Types

This section covers C variable types with an emphasis on embedded systems programming.

The goal is not only to understand how C stores data, but to understand how
variable types affect memory usage, numerical behavior, portability, and
microcontroller firmware.

## Topics

- Basic C data types
- Fixed-width integer types
- Signed vs unsigned integers
- Characters and Boolean values
- Floating-point types
- Memory size and `sizeof()`
- Type casting
- Selecting appropriate types for embedded systems

## Key Header Files

```c
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>