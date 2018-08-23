#include <iostream>

int factorial( int a ) {

  int j = a;

  while ( j > 2 ) {
    j -= 1;
    a *= j;
  }

  return a;
}
  

int main() {

  int j;

  std::cout << "Enter a number: ";
  std::cin >> j;

  j = factorial(j);
  
  std::cout << "Your number factorial is " << j << "\n";

  if ( j < 50 ) {
    std::cout << "Hey, that's pretty small." << "\n";
  }
  else if ( j < 1000000 ) {
    std::cout << "Hey, not so bad." << "\n";
  }
  else {
    std::cout << "Woah! Now we're cooking." << "\n";
  }
    


  return 0;
}
