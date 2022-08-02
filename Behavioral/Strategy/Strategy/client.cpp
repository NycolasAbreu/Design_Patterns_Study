#include "client.h"
#include "strategy.h"

Client::Client(std::shared_ptr<Strategy> sortStrategy)
  : sortStrategy(sortStrategy)
{
}

void Client::Numbers(std::vector<int> newNumbers)
{
  numbers = newNumbers;
}

std::vector<int> Client::Numbers()
{
  return numbers;
}

std::vector<int> Client::SortNumbers()
{
  return sortStrategy->SortNumbers(numbers);
}

void Client::SetStrategy(std::shared_ptr<Strategy> newStrategy)
{
  sortStrategy = newStrategy;
}
