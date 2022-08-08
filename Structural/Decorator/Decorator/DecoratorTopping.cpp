#include "DecoratorTopping.h"

DecoratorTopping::DecoratorTopping(std::shared_ptr<IPizza> pizza)
  : pizzaTemp(pizza)
{
}

std::string DecoratorTopping::GetDescription()
{
  return pizzaTemp->GetDescription();
}

double DecoratorTopping::GetPrice()
{
  return pizzaTemp->GetPrice();
}
