// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on December 2020
// This is a for loop program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <string>

int main() {
  // This is the function to run for loop.

  int Counter;
  Counter = 999;

  // process + output
  for (Counter >= 999; Counter <= 1999;) {
    Counter = Counter + 1;
    std::cout << Counter << "  " << std::ends;
    if (Counter %  5 == 4) {
      std::cout << " " << std::endl;
    }
  }
}

