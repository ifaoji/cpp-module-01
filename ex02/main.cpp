#include <iostream>
#include <string>

int main() {
  std::string hello = "HI THIS IS BRAIN";
  std::string *stringPTR = &hello;
  std::string &stringREF = hello;

  std::cout << &hello << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << &stringREF << std::endl;

  std::cout << hello << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << stringREF << std::endl;
}
