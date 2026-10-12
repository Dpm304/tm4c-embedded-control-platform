# Embedded C Register Fundamentals

This section introduces register-level programming concepts used in embedded firmware. The examples use simulated registers to demonstrate bit manipulation, register access patterns, and memory-mapped I/O without requiring a physical microcontroller.

## Learning Objectives

By completing this section, you should be able to:

- Explain how a register represents multiple hardware states using bits.
- Define and apply bit masks.
- Set, clear, toggle, and inspect individual bits.
- Explain the purpose of `volatile` in register access.
- Describe memory-mapped I/O and the role of a microcontroller's register map.
- Recognize why hardware register access must follow the target's reference manual.
- Implement simple register-access helper functions.

## Files

| File | Description |
|---|---|
| `01_register_simulation.c` | Models a status register using a standard integer variable. |
| `02_register_bit_masks.c` | Uses masks to inspect individual GPIO input bits. |
| `03_register_set_clear.c` | Demonstrates setting, clearing, and toggling selected bits. |
| `04_memory_mapped_io.c` | Explains memory-mapped I/O using a simulated register. |
| `05_register_access.c` | Implements reusable register bit-access helpers. |

## Core Concepts

### 1. Register Simulation

A register can be represented as a group of bits, with each bit or group of bits corresponding to a hardware state or configuration.

In the first example, a 32-bit unsigned integer simulates a status register. Setting bit 0 indicates that a sensor is ready, while setting bit 1 indicates that data is available.

The example is a software simulation, not a physical hardware register.

### 2. Bit Masks

A bit mask selects the bits relevant to an operation.

For example:

- `register_value & mask` tests selected bits.
- `register_value | mask` sets selected bits.
- `register_value & ~mask` clears selected bits.
- `register_value ^ mask` toggles selected bits.

Masks allow firmware to work with individual flags without manually converting an entire register value to binary.

### 3. Setting and Clearing Bits

Register operations often need to preserve unrelated bits. Setting or clearing a mask can express that intent clearly.

However, read-modify-write operations are not appropriate for every peripheral. Some registers have special write behavior, and concurrent access can introduce problems. Always consult the relevant hardware documentation.

### 4. Memory-Mapped I/O

Many microcontrollers expose peripheral registers at specified memory addresses. Firmware accesses those addresses to configure and interact with hardware such as GPIO, timers, UART, SPI, and I2C peripherals.

The exact addresses, valid operations, reset values, and side effects depend on the target device.

The examples in this folder deliberately avoid dereferencing hardware addresses. They can be compiled and run on a desktop without a connected microcontroller.

### 5. The Role of `volatile`

The `volatile` qualifier is commonly used when accessing memory that may change outside the program's ordinary execution flow, including memory-mapped peripheral registers.

It does not guarantee atomic operations, provide thread synchronization, or make an invalid address safe to access. It also does not replace the hardware reference manual.

## Embedded C Takeaway

Register-level programming connects C language fundamentals to real hardware. Bitwise operators provide a way to manipulate flags, while memory-mapped I/O provides the connection between software and peripherals.

Real hardware work requires the correct register definitions, access widths, address map, and peripheral-specific operation rules for the target microcontroller.

## Next Section

`04_interrupts` or the next planned embedded C topic will build on these concepts by exploring how firmware responds to events. Actual target-specific register programming can follow once the relevant TM4C device and development environment are configured.