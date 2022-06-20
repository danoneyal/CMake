#include <iostream>

// a hack square root calculation using simple operations
double div(double x,double y)
{  
  double result = x/y;
  std::cout << "Computing the div of " << x << " and "<< y <<" to be " << result << std::endl;
  return result;
}
