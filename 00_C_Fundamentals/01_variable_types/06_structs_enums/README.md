# 06 - Structs & Enums

This section covers structures and enumerations in C, with an emphasis on
organizing embedded-system data and representing system states.

## Topics

- Structure declaration
- Structure initialization
- Structure members
- Structures and functions
- Arrays of structures
- Nested structures
- Enumerations
- Enums with switch statements
- Structures containing enums
- Embedded system state representation

## Programs

| File | Topic |
|---|---|
| `01_struct_basics.c` | Basic structure declaration |
| `02_struct_initialization.c` | Structure initialization and typedef |
| `03_struct_members.c` | Accessing and modifying members |
| `04_structs_and_functions.c` | Passing structures to functions |
| `05_struct_arrays.c` | Arrays of structures |
| `06_nested_structs.c` | Nested structures |
| `07_enum_basics.c` | Basic enumerations |
| `08_enum_with_switch.c` | Enums with switch statements |
| `09_structs_and_enums.c` | Combining structs and enums |
| `10_embedded_system_state.c` | Embedded system state representation |

## Embedded C Concepts

Structures allow related data to be grouped into a single object.

Structures are commonly used to represent:

- Sensor data
- Motor configuration
- Communication settings
- System status
- Device configuration
- Driver state

Enumerations provide meaningful names for related integer states.

Enums are commonly used for:

- Operating modes
- System states
- Error states
- Motor states
- Communication states
- State machines

## Key Takeaways

By completing this section, I should be able to:

- Define and initialize structures
- Access structure members
- Pass structures to functions
- Create arrays of structures
- Create nested structures
- Define enumerations
- Use enums with switch statements
- Combine structs and enums
- Model embedded-system state
- Recognize when structures improve code organization

## Embedded Design Pattern

A common embedded pattern is to represent a system using a structure
containing configuration, sensor data, and state information.

For example:

```c
typedef struct
{
    SystemState state;
    int temperature_f;
    int battery_percent;
    bool motor_enabled;
} SystemStatus;