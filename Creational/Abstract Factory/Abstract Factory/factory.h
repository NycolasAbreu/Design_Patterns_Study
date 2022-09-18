#pragma once
#include "product.h"


// Abstract Factory declara os métodos que retornam diferentes produtos abstratos.
class AbstractFactory {
public:
  virtual std::shared_ptr<AbstractProductA> CreateProductA() const = 0;
  virtual std::shared_ptr<AbstractProductB> CreateProductB() const = 0;
};

/* A Factory produz uma família de produtos que pertence a um único variante.
 * Os métodos da Factory retornam um produto abstrato, mas dentro do método
 * um produto concreto é instanciado.*/
class ConcreteFactory1 : public AbstractFactory {
public:
  std::shared_ptr<AbstractProductA> CreateProductA() const override {
    return std::make_shared<ProductA1>();
  }
  std::shared_ptr<AbstractProductB> CreateProductB() const override {
    return std::make_shared<ProductB1>();
  }
};

// Cada Factory tem uma variante de produto correspondente.
class ConcreteFactory2 : public AbstractFactory {
public:
  std::shared_ptr<AbstractProductA> CreateProductA() const override {
    return std::make_shared<ProductA2>();
  }
  std::shared_ptr<AbstractProductB> CreateProductB() const override {
    return std::make_shared<ProductB2>();
  }
};
