#include "sequence_search.h"

int main()
{
  int a[] = {1, 2, 3, 4, 5};
  int *p1 = normal_search(a, a + 5, 2);

  if (p1 == a + 6)
  {
    std::cout << "search failded" << std::endl;
  }
  else
  {
    std::cout << "success!" << std::endl;
  }

  return 0;
}
