#include <iostream>
#include "proxy.h"

int main()
{
  std::cout << "Service doing its job without proxy \n";
  Service* service = new Service;
  service->Request();

  std::cout << "\nProxy calling service after doing some checkings\n";
  Proxy proxy(service);
  proxy.Request();
}
