#include <iostream>
#include <exception>
namespace NS1
{
class X
{
};

void test(int i)
{
  if(i > 0) {
    std::cout << "i>0" << std::endl;
  } else {
    std::cout << "i<=0" << std::endl;
  }
}
}
int main()
{
  try
  {
    NS1::test(5);
  }
  catch(std::exception& e)
  {
  }
  return 0;
}
