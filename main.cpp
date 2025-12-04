#include "wtf.h"
#include <iostream>
int main() {
  Working();
  std::string a = NameCheckker();
  std::cout << "A is now:" << a << "\n";

  std::string *ptr = &a;

  *ptr = "haha";
  if (NameCheckker() == a) {
    std::cout << "Nothing happend";
  } else {
    std::cout << "they are now changes cause of pointer accces";
  }
}
