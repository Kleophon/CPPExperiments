#pragma once
#include <iostream>
class Bank {
private:
  int balance = 0;

public:
  void Depost(int amount);
  void withDraw(int amount);
  int getBalance();
};
