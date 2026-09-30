# 05 - Pointers

This section introduces pointers and memory addresses in C, with an emphasis
on concepts commonly used in embedded systems programming.

## Topics

- Pointer declaration
- Memory addresses
- Address-of operator
- Dereferencing
- Pointer assignment
- Pointers and arrays
- Pointer arithmetic
- Pointers and functions
- Pointers to structures
- const pointers
- Embedded communication buffers

## Programs

| File | Topic |
|---|---|
| `01_pointer_basics.c` | Basic pointer declaration |
| `02_address_of_operator.c` | Address-of operator |
| `03_dereferencing.c` | Pointer dereferencing |
| `04_pointer_assignment.c` | Pointer reassignment |
| `05_pointers_and_arrays.c` | Pointers and arrays |
| `06_pointer_arithmetic.c` | Pointer arithmetic |
| `07_pointers_and_functions.c` | Pointer function parameters |
| `08_pointer_to_struct.c` | Pointers to structures |
| `09_const_pointers.c` | Read-only data through pointers |
| `10_embedded_pointers.c` | Embedded communication buffer |

## Embedded C Concepts

Pointers are fundamental to embedded systems because software frequently
interacts directly with memory, hardware registers, buffers, and peripheral
data.

Pointers are commonly used for:

- Communication buffers
- Sensor data
- Driver interfaces
- Structures
- Memory-mapped registers
- DMA buffers
- Hardware peripherals

## Key Takeaways

By completing this section, I should be able to:

- Declare and initialize pointers
- Obtain the address of a variable
- Dereference a pointer
- Reassign pointers
- Use pointers with arrays
- Understand basic pointer arithmetic
- Pass pointers to functions
- Use pointers with structures
- Use `const` with pointer parameters
- Understand how pointers are used with embedded buffers

## Important Concept

A pointer stores a memory address.

The address-of operator:

```c
&variable