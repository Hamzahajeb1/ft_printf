# ft_printf

## Description

**ft_printf** is a project at 42 that consists of recreating the behavior of the standard C function `printf()`.

The goal is to understand:
- variadic functions
- formatted output
- memory handling
- base conversions
- parsing format strings

This implementation handles several conversion specifiers and prints formatted output to the standard output.

## Supported Conversions

The following format specifiers are implemented:

| Specifier | Description |
|-----------|-------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address |
| `%d` | Print a decimal (base 10) integer |
| `%i` | Print an integer |
| `%u` | Print an unsigned decimal integer |
| `%x` | Print a hexadecimal number (lowercase) |
| `%X` | Print a hexadecimal number (uppercase) |
| `%%` | Print a percent sign |

## Function Prototype

```c
int ft_printf(const char *format, ...);
