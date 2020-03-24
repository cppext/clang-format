#include <iostream>
void test(int i)
{
}
int main()
{
  for (int i = 0; i < 10; i++)
  {
    if (i > 3)
    {
      std::cout << i << std::endl;
    }
    test(i);
  }
  return 0;
}
