#ifndef Toppings_H
#define Toppings_H

#include "DecoratorTopping.h"

class Mozzarella : public DecoratorTopping
{
public:
	Mozzarella(std::shared_ptr<IPizza> pizza);
	virtual ~Mozzarella() {};

	std::string GetDescription() override;
	double GetPrice() override;

private:
	double price = 1.50;
	std::string description = " Mozzarella";
};

class TommatoSauce : public DecoratorTopping
{
public:
	TommatoSauce(std::shared_ptr<IPizza> pizza);
	virtual ~TommatoSauce() {};

	std::string GetDescription() override;
	double GetPrice() override;

private:
	double price = 1.00;
	std::string description = " Tommato-Sauce";
};
#endif