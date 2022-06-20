// A simple program that computes the square root of a number
#include <cmath>
//#include <cstdlib>
#include <iostream>
#include <string>
#include "MyMath.h"
/*#include "add.h"
#include "div.h"
#include "sub.h"
#include "mul.h"
*/
int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  //const double inputValue = atof(argv[1]);
  const double inputValue1 = std::stod(argv[1]);
  const double inputValue2 = std::stod(argv[2]);

  std::cout << "Anter cmake tutorial, argv[1]: "<< inputValue1  << " argv[2]: " << inputValue2<<std::endl;
  add(inputValue1,inputValue2);
  div(inputValue1,inputValue2);
  sub(inputValue1,inputValue2);
  mul(inputValue1,inputValue2);
  
  return 0;
}