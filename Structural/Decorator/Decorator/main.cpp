#include <iostream>

#include "SimplePizza.h"
#include "Toppings.h"

int main()
{
  std::shared_ptr<IPizza> pizza = std::make_shared<SimplePizza>();
  std::shared_ptr<IPizza> pizzaMozza = std::make_shared<Mozzarella>(pizza);
  std::shared_ptr<IPizza> pizzaMozzaTomato = std::make_shared<TommatoSauce>(pizzaMozza);
  std::cout << pizzaMozzaTomato->GetDescription() + "\n";
  std::cout << pizzaMozzaTomato->GetPrice();
}