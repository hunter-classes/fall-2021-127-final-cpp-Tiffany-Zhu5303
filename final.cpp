#include <iostream>

/*Writer a function isRightTriangle. It will take three integer
parameters. The first two represent the two legs of a right triangle
and the third represents the hypotenuse.

Your program should return true if the three sides
represents a right triangle and false otherwise. You should assume
that your first two parameters are the legs and the third the
hypotenuse.*/
bool isRightTriangle(int a, int b, int c){
  int asquared, bsquared, csquared;
  bool rightTriangle;
  asquared = a*a;
  bsquared = b*b;
  csquared = c*c;
  rightTriangle = asquared + bsquared == csquared;

  if (rightTriangle == 1){
    std::cout << "True, ";
  }else{
    std::cout << "False, ";
  }

  return rightTriangle;
}

/*Write a function named fizzbuzz. It should accept an *int* as a
parameter and it should return a *std::string*. If tqhe parameter is
divisible by *3* the function should return the *std::string** "fizz"
if the number is divisible by *5*, return "buzz" and if divisible by
both *3* and *5* return "fizzbuzz."*/
std::string fizzbuzz(int number){
  if (number % 3 == 0 && number % 5 == 0){
    return "fizzbuzz";
  }else if (number % 5 == 0){
    return "buzz";
  }else if (number % 3 == 0){
    return "fizz";
  }else{
    return "";
  }
}

int main(){
  std::cout << isRightTriangle(3, 4, 5) << "\n";
  std::cout << isRightTriangle(4, 3, 5) << "\n";
  std::cout << isRightTriangle(5, 3, 4) << "\n";

  std::cout << fizzbuzz(9) << "\n";
  std::cout << fizzbuzz(10) << "\n";
  std::cout << fizzbuzz(15) << "\n";
  
  int i = 1;
  while (i < 22){
    std::cout << fizzbuzz(i);
    i++;
  }

  std::cout << "\n";
  return 0;
}