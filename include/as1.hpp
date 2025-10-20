#pragma once
#include <iostream>

namespace homework {
// Mainly from the slides of the first week

// As 1.0 (Hello World) function that prints "Hello, World!"
// Done for you
void printHello();

// As 1.1 (Reference/indirection) function that takes address of an int and returns that the
// original value plus one TO DO: implement the function "AddOneRef"
int AddOneRef(int &x);

// As 1.2 (Function declarators) check if number is odd return true if odd, false if even
// TO DO: implement the function "isOdd" here or in src/as1.cxx
bool isOdd(int x);

// As 1.3 (C++ casts) cast float to int. DO NOT USE C STYLE CAST
// TO DO: implement the function "floatToInt" here or in src/as1.cxx
int floatToInt(float x);

// As 1.4 (Recursive function) factorial function
// TO DO: implement the factorial function in src/as1.cxx with the following specifications:
// Return -1 for negative numbers
// https://en.wikipedia.org/wiki/Factorial 
int factorial(int n);

} // namespace homework
