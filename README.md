# String

A C++ String utility class that extends the functionality of standard string manipulation in the C++ Standard Library. This class provides a set of static functions for common string operations, making string manipulation easier and more efficient.

## Features

1. **Case Conversion**

   - **Convert to lowercase**: Transform a string to all lowercase characters.
   - **Convert to uppercase**: Transform a string to all uppercase characters.
   - **Capitalize first letter**: Convert the first character of a string to uppercase.

2. **String Trimming**

   - **Left trim**: Remove specified characters from the left side of a string.
   - **Right trim**: Remove specified characters from the right side of a string.
   - **Trim both sides**: Remove specified characters from both sides of a string.

3. **String Splitting and Joining**

   - **Split string**: Split a string into a `std::vector<std::string>` based on a given delimiter.
   - **Join strings**: Join elements of a `std::vector<std::string>` into a single string with a specified delimiter.

4. **Prefix and Suffix Checks**

   - **Starts with**: Check if a string starts with a specific prefix.
   - **Ends with**: Check if a string ends with a specific suffix.

5. **String Formatting**
   - **Format string**: Create formatted strings using a syntax similar to printf.

## Getting Started

1. Prerequisites

   - C++ 11 or later

2. Clone the Repository

```bash
git clone https://github.com/jiafie7/string.git
cd string
```

3. Build the Project

```bash
mkdir build
cd build
cmake ..
make
```

## Usage

1. Example code

```c
#include <iostream>

#include "utility/string.h"

using namespace melon::utility;

int main()
{
  std::cout << String::toLower("AbCDDDD") << '\n';
  std::cout << String::toUpper("aBcdddd") << '\n';

  std::cout << String::leftTrim("ABC", "BA") << '\n';
  std::cout << String::rightTrim("hello, world", "ldr") << '\n';
  std::cout << String::trim("hello, world", "ldhr") << '\n';

  std::string path = "/root/home/dev/index.html";
  std::vector<std::string> v = String::split(path, "/");
  for (std::string& s : v)
    std::cout << s << ' ';
  std::cout << '\n';

  std::cout << String::join(v, "/") << '\n';

  std::cout << std::boolalpha;
  std::cout << String::startsWith("abcdefg", "abc") << '\n';
  std::cout << String::endsWith("abcdefg", "efg") << '\n';
  std::cout << std::noboolalpha;

  std::cout << String::capitalize("abc") << '\n';

  std::cout << String::format("I am %s, %d years old.\n", "Michael", 17);

  return 0;
}
```

2. Run the Example

```bash
./main
```

3. Output

```bash
abcdddd
ABCDDDD
C
hello, wo
ello, wo
root home dev index.html
root/home/dev/index.html
true
true
Abc
I am Michael, 17 years old.
```

## API Reference

### String Transformation

- static std::string toLower(const std::string& input): Convert a string to lowercase.
- static std::string toUpper(const std::string& input): Convert a string to uppercase.
- static std::string capitalize(const std::string& input): Capitalize the first letter of the string.

### String Trimming

- static std::string leftTrim(const std::string& input, const std::string& trims): Remove specified characters from the left side of the string.
- static std::string rightTrim(const std::string& input, const std::string& trims): Remove specified characters from the right side of the string.
- static std::string trim(const std::string& input, const std::string& trims): Remove specified characters from both sides of the string.

### String Splitting and Joining

- static std::vector<std::string> split(const std::string& input, const std::string& separator): Split the string into a vector of strings using the specified separator.
- static std::string join(const std::vector<std::string>& input, const std::string& separator): Join the vector elements into a single string with the specified separator.

### Prefix and Suffix Checks

- static bool startsWith(const std::string& input, const std::string& prefix): Check if the string starts with the specified prefix.
- static bool endsWith(const std::string& input, const std::string& suffix): Check if the string ends with the specified suffix.

### String Formatting

- static std::string format(const char\* fmt, ...): Create a formatted string using printf-style syntax.

## Contributing

Contributions are welcome! Please follow these steps:

1. Fork the repository.
2. Create a new branch: `git checkout -b feature-name`.
3. Commit your changes: `git commit -m "Add feature-name"`.
4. Push to your branch: `git push origin feature-name`.
5. Open a pull request.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.
