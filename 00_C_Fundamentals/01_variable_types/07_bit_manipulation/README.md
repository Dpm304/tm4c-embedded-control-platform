# 07 - Bit Manipulation

This section covers bitwise operations, bit shifting, masks, and
register-style manipulation with an emphasis on embedded systems programming.

## Topics

- Binary representation
- Bitwise AND
- Bitwise OR
- Bitwise XOR
- Bitwise NOT
- Left shifts
- Right shifts
- Setting bits
- Clearing bits
- Toggling bits
- Bit masks
- Register simulation
- Bit fields

## Programs

| File | Topic |
|---|---|
| `01_binary_representation.c` | Binary and hexadecimal representation |
| `02_bitwise_and.c` | Bitwise AND |
| `03_bitwise_or.c` | Bitwise OR |
| `04_bitwise_xor.c` | Bitwise XOR |
| `05_bitwise_not.c` | Bitwise NOT |
| `06_left_shift.c` | Left bit shifting |
| `07_right_shift.c` | Right bit shifting |
| `08_set_clear_toggle_bits.c` | Set, clear, and toggle operations |
| `09_bit_masks.c` | Bit masks and status checking |
| `10_register_simulation.c` | Simulated hardware register |
| `11_bit_fields.c` | Register-style bit fields |

## Embedded C Concepts

Bit manipulation is fundamental to embedded systems because microcontrollers
use individual bits and groups of bits to control hardware peripherals.

Bitwise operations are commonly used for:

- GPIO configuration
- Peripheral control
- Status registers
- Interrupt flags
- Communication configuration
- Hardware modes
- Control registers

## Common Embedded Patterns

### Set a bit

```c
register_value |= MASK;