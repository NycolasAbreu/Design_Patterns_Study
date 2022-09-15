#include <iostream>
#include "facade.h"

int main()
{
  Facade* facade = new Facade();
  // A Facade cria uma interface conveniente para utilizar os métodos mais complexoes da Api/Biblioteca
  std::cout << facade->Operation();

  delete facade;
}