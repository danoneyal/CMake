#include <iostream>

// a hack square root calculation using simple operations
double sub(double x,double y)
{  
  double result = x-y;
  std::cout << "Computing the sub of " << x << " and "<< y <<" to be " << result << std::endl;
  return result;
}
