#include "strategy.h"

#include <algorithm>
#include <iostream>

//-------------------------STLSORTSTRATEGY-------------------------------------

std::vector<int> STLSortStrategy::SortNumbers(std::vector<int> numbers)
{
  std::cout << "\nSorting by STLSortStrategy\n";
  std::sort(numbers.begin(), numbers.end());
  return numbers;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

//-------------------------QUICKSORTSTRATEGY-----------------------------------

std::vector<int> QuickSortStrategy::SortNumbers(std::vector<int> numbers)
{
  std::cout << "\nSorting by QuickSortStrategy\n";
  Quicksort(numbers, 0, numbers.size() - 1);
  return numbers;
}

int QuickSortStrategy::Partition(std::vector<int>& v, int start, int end)
{
  int pivot = end;
  int j = start;
  for (int i = start; i < end; ++i) {
    if (v[i] < v[pivot]) {
      std::swap(v[i], v[j]);
      ++j;
    }
  }
  std::swap(v[j], v[pivot]);
  return j;
}

void QuickSortStrategy::Quicksort(std::vector<int>& v, int start, int end)
{
  if (start < end) {
    int p = Partition(v, start, end);
    Quicksort(v, start, p - 1);
    Quicksort(v, p + 1, end);
  }
}

//-----------------------------------------------------------------------------