#pragma once
#include <iostream>

class IService
{
	public:
		virtual void Request() = 0;
};

class Service : public IService
{
public:
	void Request() override {
		std::cout << "Service doing its job \n";
	}
};