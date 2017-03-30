#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <gmp.h>
#include <gmpxx.h>

using namespace std;

int main () {
  mpz_class a, b, c;
  
  a = 1234;
  b = "-5678";
  c = a+b;
  
  cout << "sum of " << a << " and " << b << " is " << c << "\n";
  cout << "absolute value is " << abs(c) << "\n";
  return 0; 
}
