#ifndef IPizza_H
#define IPizza_H

#include <string>

class IPizza {
	public:
		IPizza() = default;
		virtual ~IPizza() {};

		virtual std::string GetDescription() = 0;
		virtual double GetPrice() = 0;
};
#endif