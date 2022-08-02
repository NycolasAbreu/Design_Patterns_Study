#include <vector>

class Strategy 
{
  public:
    virtual ~Strategy() {};
    virtual std::vector<int> SortNumbers(std::vector<int> numbers) = 0;
};

//-----------------------------------------------------------------------------

class STLSortStrategy : public Strategy {
  public:
    virtual ~STLSortStrategy() {};
    std::vector<int> SortNumbers(std::vector<int> numbers) override;
};

//-----------------------------------------------------------------------------

class QuickSortStrategy : public Strategy {
  public:
    virtual ~QuickSortStrategy() {};
    std::vector<int> SortNumbers(std::vector<int> numbers) override;
  private:
    int Partition(std::vector<int>& v, int start, int end);
    void Quicksort(std::vector<int>& v, int start, int end);
};