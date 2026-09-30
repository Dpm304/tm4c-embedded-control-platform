# 03 - Functions

This section covers C functions and their use in modular embedded software.

## Topics

- Function definitions
- Parameters
- Return values
- Function prototypes
- Passing values to functions
- Static functions
- Modular function design
- Embedded-style function interfaces

## Programs

| File | Topic |
|---|---|
| `01_function_basics.c` | Basic function definition and calls |
| `02_parameters.c` | Function parameters |
| `03_return_values.c` | Returning data from functions |
| `04_function_prototypes.c` | Function declarations and prototypes |
| `05_pass_by_value.c` | Passing data by value |
| `06_static_functions.c` | File-local functions |
| `07_modular_functions.c` | Breaking a program into responsibilities |
| `08_embedded_functions.c` | Embedded-style function interfaces |

## Embedded C Concepts

Functions are fundamental to modular firmware development. Breaking code into
small, focused functions improves readability, reuse, testing, and
maintainability.

The examples in this section begin with basic function syntax and progress
toward functions representing hardware and system-level operations.

## Key Takeaways

By completing this section, I should be able to:

- Define and call functions
- Pass data into functions
- Return data from functions
- Declare function prototypes
- Understand pass-by-value behavior
- Use `static` functions for file-local implementation details
- Break larger programs into focused functions
- Design basic embedded-style software interfaces