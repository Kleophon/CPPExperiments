#include "banksystem.h"
#include <iostream>

/*wtf happeing here idk,fucking implementation looks weird
 * alson why i need write ENTIRE class on Header file ...no file manager.
 * only fucking compiler with Objects*/
void Bank::Depost(int amount) {
  Bank::balance += amount;
  // typical CRUD
}

void Bank::withDraw(int amount) {
  if (Bank::balance >= 0) {

    Bank::balance -= amount;
  } else if (amount > Bank::balance) {

    // way safer
    std::cout << "nah";
  }
}
int Bank::getBalance() { return balance; }
