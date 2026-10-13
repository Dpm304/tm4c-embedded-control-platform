# Embedded C Interrupt Fundamentals

This section introduces interrupt-driven programming, interrupt service routines (ISRs), shared data, event flags, and safe access to data shared between interrupt handlers and the main program.

All examples in this folder simulate interrupt events using ordinary C functions. They are designed to compile on a desktop and do not configure or invoke actual microcontroller interrupts.

## Learning Objectives

By completing this section, you should be able to:

- Explain the purpose of interrupts in embedded systems.
- Describe the role and responsibilities of an interrupt service routine.
- Identify data shared between an ISR and the main program.
- Understand the limitations of `volatile`.
- Use a flag to notify the main loop that an event occurred.
- Explain why flags can lose event information.
- Understand atomic operations and their role in shared-data access.
- Recognize when a target-specific critical section or another synchronization mechanism is needed.

## Files

| File | Description |
|---|---|
| `01_interrupt_concept.c` | Introduces interrupt concepts through a simulated timer event. |
| `02_shared_data.c` | Demonstrates a shared counter and explains the limitations of `volatile`. |
| `03_interrupt_flag.c` | Uses a data-ready flag to notify the main loop. |
| `04_interrupt_safe_data.c` | Introduces C11 atomic operations for shared counter access. |

## Core Concepts

### 1. Interrupts and ISRs

An interrupt allows a microcontroller to respond to an event that requires attention, such as a timer expiration, received UART data, or a GPIO event.

The interrupt service routine is the function or handler executed in response to an interrupt, according to the target's interrupt architecture and toolchain.

ISRs should generally be short and predictable. Work that does not need immediate attention can often be deferred to the main loop or another execution context.

### 2. Shared Data

The main program and an ISR may access the same variable. Examples include event counters, received-data buffers, status flags, and sensor measurements.

Shared data must be designed around the target's concurrency and interrupt behavior. An operation that looks like one C statement may require multiple machine instructions.

### 3. The Role and Limitations of `volatile`

`volatile` is commonly used for data that can change outside the ordinary execution flow, including certain ISR-shared variables and memory-mapped hardware registers.

However, `volatile` does not:

- Guarantee atomic read or write operations.
- Make `counter++` an indivisible operation.
- Provide general synchronization or thread safety.
- Prevent every possible lost-event condition.

Use it for its defined purpose, not as a universal concurrency solution.

### 4. Interrupt Flags

A flag can indicate that an event occurred and that the main loop should perform follow-up work.

This pattern is simple, but a single flag can represent only limited event information. Multiple events may occur before the flag is handled, and a new event can conflict with clearing the flag.

Depending on the application, a counter, queue, ring buffer, or synchronization mechanism may be more appropriate.

### 5. Atomic Operations and Critical Sections

C11 provides atomic types and operations for specific shared-data access patterns. Atomic operations can prevent certain races on shared objects, but their suitability in an actual ISR depends on the implementation.

Some embedded targets require a critical section or another platform-supported mechanism. Such a mechanism must be designed for the target's interrupt architecture and should preserve the prior interrupt state where necessary.

Atomic operations and critical sections solve different problems; neither should be selected without considering what data is shared and how it is accessed.

## Desktop Simulation vs. Real Hardware

These programs call their handler functions directly from `main()`. They do not test interrupt latency, interrupt priority, nested interrupts, race conditions caused by real concurrency, or peripheral behavior.

Actual interrupt implementation requires target-specific setup, which may include:

- Interrupt vector and startup configuration.
- Peripheral interrupt enable and status registers.
- Interrupt-controller configuration.
- Compiler- and platform-specific handler declarations.
- Appropriate shared-data and synchronization strategies.

## Embedded C Takeaway

Interrupt-driven firmware must respond promptly to hardware events while keeping shared data consistent. Understanding the difference between `volatile`, atomic operations, event flags, and critical sections is essential before implementing real interrupt-driven drivers.

## Next Section

`05_function_pointers` will introduce function pointers, which are useful for callbacks, driver interfaces, and event-dispatch designs. Later, these concepts can be applied to actual TM4C peripherals and interrupt handlers.