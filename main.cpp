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
