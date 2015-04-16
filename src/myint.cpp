#include <myint.h>

MyInt::MyInt(int num)
:num_(num)
{}

bool MyInt::isOdd()
{
  return (num_ % 2) != 0 ? true : false;
}

bool MyInt::isEven()
{
  return isOdd();
}
