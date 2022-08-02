#include <iostream>

#include "client.h"
#include "strategy.h"

void ShowNumbers(Client& client) {
  std::cout << "Numbers:";
  for (auto num : client.Numbers()) {
    std::cout << num;
  }
}

int main()
{
  Client client(std::make_shared<STLSortStrategy>());
  
  ShowNumbers(client);

  for (auto num : client.SortNumbers()) {
    std::cout << num;
  }

  std::cout << "\n";
  ShowNumbers(client);

  client.SetStrategy(std::make_shared<QuickSortStrategy>());
  for (auto num : client.SortNumbers()) {
    std::cout << num;
  }
}

