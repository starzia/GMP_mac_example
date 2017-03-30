//
//  main.cpp
//  test
//
//  Created by Stephen Tarzia on 3/30/17.
//  Copyright © 2017 Kellogg | Northwestern. All rights reserved.
//

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <gmp.h>
#include <gmpxx.h>

using namespace std;

int main(int argc, const char * argv[]) {
    mpz_class a, b, c;
    
    a = 1234;
    b = "-5678";
    c = a+b;
    
    cout << "sum of " << a << " and " << b << " is " << c << "\n";
    cout << "absolute value is " << abs(c) << "\n";
    return 0;
}
