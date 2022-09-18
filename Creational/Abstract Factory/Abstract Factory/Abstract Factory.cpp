#include <iostream>
#include <memory>
#include "factory.h"

/* O código do cliente funciona com Factorys e produtos apenas por meios abstratos
 * Permitindo que qualquer Factory ou Produto seja instanciada.*/
void ClientCode(const AbstractFactory& factory) {
  const std::shared_ptr<AbstractProductA> product_a = factory.CreateProductA();
  const std::shared_ptr<AbstractProductB> product_b = factory.CreateProductB();
  std::cout << product_a->UsefulFunctionA() << "\n";
  std::cout << product_b->UsefulFunctionB() << "\n";
}

void main() {
  std::cout << "Client: Testing client code with the first factory type:\n";
  ConcreteFactory1* f1 = new ConcreteFactory1();
  ClientCode(*f1);
  delete f1;
  std::cout << std::endl;
  std::cout << "Client: Testing client code with the second factory type:\n";
  ConcreteFactory2* f2 = new ConcreteFactory2();
  ClientCode(*f2);
  delete f2;
}