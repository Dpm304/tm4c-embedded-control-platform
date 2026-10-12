# Embedded C Memory Fundamentals

This subsection explores memory concepts that influence how embedded software is designed, compiled, and executed.

The examples cover automatic storage duration, dynamic memory allocation, static storage duration, memory measurement, and basic RAM budgeting.

## Learning Objectives

- Understand local variables and automatic storage duration.
- Compare automatic storage with dynamically allocated memory.
- Understand static storage duration and persistent state.
- Measure object and array sizes using `sizeof`.
- Distinguish pointer size from the size of the data it references.
- Calculate a basic memory budget.
- Recognize the challenges of dynamic memory allocation in resource-constrained systems.

## Files

| File | Topic |
|---|---|
| `01_stack_basics.c` | Local variables, function calls, and automatic storage duration |
| `02_stack_vs_heap.c` | Automatic arrays versus dynamic memory allocation |
| `03_static_storage.c` | Static storage duration and persistent state |
| `04_memory_size.c` | `sizeof`, fixed-width integers, arrays, and pointers |
| `05_memory_constraints.c` | Basic RAM budgeting and resource planning |

## 1. Automatic Storage Duration

Local variables declared within a function or block generally have automatic storage duration unless their declaration specifies otherwise.

Their lifetimes are associated with execution entering and leaving their enclosing block.

On typical embedded implementations, these objects are commonly stored on the stack. Large local arrays and deep function-call chains can contribute to stack exhaustion.

## 2. Stack vs. Heap

Automatic storage and dynamically allocated storage have different lifetimes and management requirements.

- **Automatic storage:** Objects generally cease to exist when their enclosing block exits.
- **Dynamic allocation:** Allocated storage remains available until released with `free()` or until program termination.
- **Allocation failure:** Always check whether `malloc()` returns `NULL`.
- **Memory fragmentation:** Repeated allocations and releases can make suitable contiguous blocks harder to obtain on some implementations.

Many embedded systems restrict or avoid dynamic allocation during normal operation to improve predictability and reliability.

## 3. Static Storage Duration

Objects with static storage duration exist for the entire execution of the program.

A local variable declared with `static` retains its value between function calls while remaining accessible only within its declared scope.

Static storage is useful for:

- Persistent counters
- Driver state
- Fixed-size buffers
- State-machine variables
- Application configuration

Static storage does not necessarily mean read-only storage. A static variable can still be modified unless it is appropriately qualified.

## 4. Measuring Memory with `sizeof`

The `sizeof` operator returns the size of an object or type in C bytes.

For an array, the element count can be calculated using:

```c
sizeof(array) / sizeof(array[0])
```

This works while `array` is an actual array in that scope. When an array is passed to a function as a parameter, the parameter is adjusted to a pointer, so this expression no longer provides the original array's length.

Additional considerations:

- Fixed-width integer types provide predictable bit widths when supported by the implementation.
- Pointer size depends on the target architecture and implementation.
- Structure padding and alignment can increase memory requirements beyond the sum of member sizes.
- The size of an object does not necessarily indicate where it is stored.

## 5. Memory Constraints

Embedded systems operate within finite RAM and program-memory limits. A practical memory budget should account for:

- Global and static objects
- Stack usage and maximum call depth
- Dynamically allocated objects, if used
- Sensor and communication buffers
- Runtime and library requirements
- Alignment, padding, and linker-generated sections

A basic memory budget helps estimate resource usage, but it does not guarantee that the program will fit. Actual usage should be verified using compiler output, linker map files, and target documentation.

## Embedded C Takeaway

Memory-aware firmware design requires understanding not only how much data an object contains, but also its lifetime, allocation strategy, and impact on the target system's limited resources.

These examples use standard C concepts and are intended to compile on a desktop GCC toolchain. They do not reproduce a specific microcontroller's physical memory layout or guarantee target-specific memory usage.

## Next Subsection

**`03_registers`** — applying embedded C concepts to hardware-style registers, bit masks, and memory-mapped I/O.