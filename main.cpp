#include "banksystem.h"
#include "wtf.h"
#include <iostream>

int main() {
  /*
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
  */
  Bank b;
  b.Depost(12123);
  std::cout << "succesfully addded";

  int value = b.getBalance();
  std::cout << "My balance " << value;
  b.withDraw(2323232323);
}
