#include <iostream>

int test(int i)
{
  return i;
}

int main()
{
  int i =  // comment
      test(5 +  // comment2
           3 * 2);  // comment3
  return 0;
}
