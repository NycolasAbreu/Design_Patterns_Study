#include "Toppings.h"

Mozzarella::Mozzarella(std::shared_ptr<IPizza> pizza)
  : DecoratorTopping(pizza)
{
}

inline std::string Mozzarella::GetDescription()
{
	return pizzaTemp->GetDescription() + description;
}

inline double Mozzarella::GetPrice()
{
	return pizzaTemp->GetPrice() + price;
}

//-----------------------------------------------------------------------

TommatoSauce::TommatoSauce(std::shared_ptr<IPizza> pizza)
	: DecoratorTopping(pizza)
{
}

inline std::string TommatoSauce::GetDescription()
{
	return pizzaTemp->GetDescription() + description;
}

inline double TommatoSauce::GetPrice()
{
	return pizzaTemp->GetPrice() + price;
}