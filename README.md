# \_printf

## Description
\_printf is a custom implementation of the standard C printf function.
It works like a restaurant — when invoked, \_printf acts as the waiter
taking your order from the format string, using the % sign as a trigger
to identify what to print.

It passes the order to handle\_specifier, the maitre d', who decides
which cook handles each specifier. Each cook specialises in one dish:
- `print_char.c` — handles %c (characters)
- `print_string.c` — handles %s (strings)
- `print_int.c` — handles %d and %i (integers)
- `print_percentage.c` — handles %% (literal percent sign)

`help_int.c` is the kitchen assistant who helps the integer cook
with tricky orders like negative numbers and INT\_MIN overflow.

Every finished dish goes through `_putchar` — the pass window —
before reaching the customer. Every single character printed
goes through here no matter which cook made it.

Finally, \_printf returns the total count of characters printed
— like the bill at the end of the meal.

## Conversion Specifiers
| Specifier |         Output        |
|-----------|-----------------------|
|     %c    |  Single character     |
|     %s    |  String of characters |
|     %d    |  Decimal integer      |
|     %i    |  Integer              |
|     %%    |  Literal percent sign |

## Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

## Example
```c
#include "main.h"
int main(void)
{
    _printf("Hello %s, you are %d years old\n", "World", 25);
    return (0);
}
```

## Authors
- [rukshar06](https://github.com/rukshar06)
- [Fantasma-27](https://github.com/Fantasma-27)
- [Dblssn](https://github.com/Dblssn)
