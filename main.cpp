#include <iostream>

int main() {
  
  double interest_rate = 8.5;
  double* double_pointer = &interest_rate;
  double** double_pointer_pointer = &double_pointer;

  std::cout << "double_pointer: " << double_pointer << std::endl;
  std::cout << "*double_pointer: " << *double_pointer << std::endl << std::endl;
  std::cout << "double_pointer_pointer: " << double_pointer_pointer << std::endl;
  std::cout << "*double_pointer_pointer: " << *double_pointer_pointer << std::endl;
  std::cout << "**double_pointer_pointer: " << **double_pointer_pointer << std::endl;

}