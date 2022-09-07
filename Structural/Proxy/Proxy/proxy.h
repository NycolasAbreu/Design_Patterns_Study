#pragma once
#include "service.h"

class Proxy : public IService
{
	public:	
		Proxy(
			IService* service
		) : service(service) {}
	
		~Proxy() {
			delete service;
		}

		void Request() {
			if (CheckAccess()) {
				service->Request();
				Log();
			}
		}

	private:
		bool CheckAccess() const {
			std::cout << "Checking stuff for acess \n";
			return true;
		}

		void Log() const {
			std::cout << "Logging stuff after the request \n";
		}

		IService* service = nullptr;
};