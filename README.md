# SaldoranCore

**SaldoranCore** — personal C++ header-only utility library.

## Currently supports:
- User-defined literal `_l` for creating string lists from comma-separated string literals.
- `indexOf` and `at` methods for searching and accessing elements.

## Example usage:

```cpp
#include "SaldoranCore/string_list_literal.h"

auto units = "km,cm,inch,kg"_l;

int index = units.indexOf("cm");

if (index != -1) {
    std::cout << "Found at index: " << index << std::endl;
} else {
    std::cout << "Not found." << std::endl;
}
