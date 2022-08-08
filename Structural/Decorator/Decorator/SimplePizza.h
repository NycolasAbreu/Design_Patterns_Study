#ifndef SimplePizza_H
#define SimplePizza_H

#include "IPizza.h"

class SimplePizza : public IPizza {
	public:
		SimplePizza() = default;
		virtual ~SimplePizza() {};

		std::string GetDescription() override;
		double GetPrice() override;

	private:
		double price = 4.50;
		std::string description = "Pizza-dough";
};
#endif