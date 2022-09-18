#pragma once
#include <string>

// Cada produto de uma familia especifica deve implementar sua interface
class AbstractProductA {
public:
  virtual ~AbstractProductA() {};
  virtual std::string UsefulFunctionA() const = 0;
};

class ProductA1 : public AbstractProductA {
public:
  std::string UsefulFunctionA() const override {
    return "Product A1 doing something usefull";
  }
};

class ProductA2 : public AbstractProductA {
  std::string UsefulFunctionA() const override {
    return "Product A2 doing something usefull";
  }
};

//--------------------------------------------------------------------------

class AbstractProductB {
  public:
    virtual ~AbstractProductB() {};
    virtual std::string UsefulFunctionB() const = 0;
};

class ProductB1 : public AbstractProductB {
  public:
    std::string UsefulFunctionB() const override {
      return "Product B1 doing something usefull";
    }
};

class ProductB2 : public AbstractProductB {
  public:
    std::string UsefulFunctionB() const override {
      return "Product B2 doing something usefull";
    }
};