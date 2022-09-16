#pragma once

#include "product.h"
#include <memory>

// A interface Builder especifica os métodos para criar as partes do objeto Produto
class Builder {
  public:
    virtual ~Builder() {}
    virtual void ProducePartA() const = 0;
    virtual void ProducePartB() const = 0;
    virtual void ProducePartC() const = 0;
};

class ConcreteBuilder : public Builder {
  public:

    ConcreteBuilder() {
      Reset();
    }

    ~ConcreteBuilder() {}

    void Reset() {
      product = std::make_shared<Product>();
    }

    void ProducePartA()const override {
      product->Parts().push_back("PartA1");
    }

    void ProducePartB()const override {
      product->Parts().push_back("PartB1");
    }

    void ProducePartC()const override {
      product->Parts().push_back("PartC1");
    }

    std::shared_ptr<Product> GetProduct() {
      return product;
    }

  private:
    std::shared_ptr<Product> product = nullptr;
};