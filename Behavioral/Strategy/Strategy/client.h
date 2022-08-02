#include <vector>
#include <memory>

class Strategy;

class Client {
  public:
    Client() = delete;
    Client(std::shared_ptr<Strategy> sortStrategy);
    ~Client() {};

    void Numbers(std::vector<int> newNumbers);
    std::vector<int> Numbers();

    void SetStrategy(std::shared_ptr<Strategy> newStrategy);
    std::vector<int> SortNumbers();

  private:
    std::shared_ptr<Strategy> sortStrategy;
    std::vector<int> numbers = {9, 8, 7, 6, 5, 4, 3, 2, 1};
};