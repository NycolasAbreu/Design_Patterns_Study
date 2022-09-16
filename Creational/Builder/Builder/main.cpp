#include <iostream>
#include "builder.h"

int main() {
  ConcreteBuilder* builder = new ConcreteBuilder();
  std::cout << "Standard basic product:\n";
  builder->ProducePartA();

  std::shared_ptr<Product> p = builder->GetProduct();
  p->ListParts();
  builder->Reset();

  std::cout << "Standard full featured product:\n";
  builder->ProducePartA();
  builder->ProducePartB();
  builder->ProducePartC();

  p = builder->GetProduct();
  
  p->ListParts();
  builder->Reset();

  std::cout << "Custom product:\n";
  builder->ProducePartA();
  builder->ProducePartC();
  p = builder->GetProduct();
  p->ListParts();

  delete builder;
  return 0;
}