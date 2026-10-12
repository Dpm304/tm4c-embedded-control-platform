# Volatile and Const

This subsection introduces `volatile` and `const`, two C qualifiers that are especially important when writing embedded software.

The examples demonstrate how these qualifiers affect access to data shared with hardware, interrupts, and other parts of a firmware system.

## Learning Objectives

- Understand the purpose of `volatile`
- Understand why hardware registers may require `volatile`
- Understand how interrupt-shared variables use `volatile`
- Understand pointer-to-const data
- Understand const-qualified data
- Distinguish `volatile` from `const`
- Understand that `volatile` does not provide synchronization or atomicity

## Files

| File | Topic |
|---|---|
| `01_volatile_basics.c` | Introduction to `volatile` |
| `02_volatile_hardware.c` | Simulated hardware register |
| `03_volatile_interrupts.c` | Interrupt-shared data |
| `04_const_pointer.c` | Pointer to constant data |
| `05_const_data.c` | Constant data |

---

## 1. Volatile

The `volatile` qualifier tells the compiler that a variable may change outside the normal flow of program execution.

Example:

```c
volatile bool sensor_ready = false;