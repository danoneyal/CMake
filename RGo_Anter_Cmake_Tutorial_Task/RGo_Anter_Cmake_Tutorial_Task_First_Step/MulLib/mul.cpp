#include <iostream>

// a hack square root calculation using simple operations
double mul(double x,double y)
{  
  double result = x*y;
  std::cout << "Computing the mul of " << x << " and "<< y <<" to be " << result << std::endl;
  return result;
}
