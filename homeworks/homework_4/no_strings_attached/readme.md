# no_strings_attached

A small C++ library for basic string processing.
Provides functionality for splitting and trimming strings, along with examples and unit tests.

---

## Features

### Split strings

* Split a string by a delimiter
* Optionally limit the number of resulting parts

### Trim strings

* Trim characters from:

  * left
  * right
  * both sides
* Default trimming removes whitespace

---

## Project Structure

```
no_strings_attached/
├── examples/        # Example programs
├── external/        # Dependencies (GoogleTest)
├── no_strings_attached/
│   ├── string_split.*
│   ├── string_trim.*
│   └── *_test.cpp
└── CMakeLists.txt
```

---

## Build

```bash
mkdir build
cd build
cmake ..
make
```

---

## Run Examples

### Split strings

```bash
./examples/split_strings
```

### Trim strings

```bash
./examples/trim_strings
```

---

## Run Tests

```bash
ctest
```

---

## Usage

```cpp
#include <no_strings_attached/string_split.h>
#include <no_strings_attached/string_trim.h>

using namespace no_strings_attached;

auto parts = Split("hello world", " ");
auto trimmed = Trim("  hello ");
```

---

## Notes

* Requires C++17 or newer
* Uses GoogleTest for unit testing
