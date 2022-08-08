#ifndef DecoratorTopping_H
#define DecoratorTopping_H

#include <memory>
#include "IPizza.h"

class DecoratorTopping : public IPizza
{
	public:
		DecoratorTopping(std::shared_ptr<IPizza> pizza);
		virtual ~DecoratorTopping() {};

		std::string GetDescription() override;
		double GetPrice() override;

	protected:
		std::shared_ptr<IPizza> pizzaTemp;
};

#endif