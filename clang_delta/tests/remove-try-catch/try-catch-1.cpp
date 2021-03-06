#include <exception>
#include <iostream>

int main()
{
  try
  {
    int a = 6;
    std::cerr << "a = " << a << "\n";
  }
  catch(const std::exception &ex)
  {
    std::cerr << "Foo";
  }
  catch(const std::exception &ex)
  {
    std::cerr << "Bar";
  }

  try
  {
    int a = 6;
    std::cerr << "a = " << a << "\n";
  }
  catch(const std::exception &ex)
  {
    std::cerr << "FooBar";
  }

  return 0;
}
