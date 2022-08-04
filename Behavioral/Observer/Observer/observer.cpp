#include "observer.h"
#include <iostream>

Observer::Observer(int id)
  : id(id)
{
}

void Observer::Update(std::string& newMessage)
{
  message = newMessage;
}

void Observer::ShowMessage()
{
  std::cout << "Observer: " + std::to_string(id) + " " + message + "\n";
}