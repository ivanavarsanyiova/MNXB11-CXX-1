#include "../include/as2.hpp"
#include <iostream>
using namespace std;

namespace homework {

// implement Foo methods here
struct Foo {
  float x;
  int bar(){
  cout << 42 <<endl;
  return 0;
  };
  float baz(){
  cout << 3.14 << endl;
  x=2.71;
  return 0;
  };
  std::vector<double> quux(){
  cout << {1.0,2.0,3.0} << endl;
  return 0;
  };
};


'int Foo::bar() { 
  return 42; 
}
#float Foo::baz(){
  return 3.14; 
 # x=2.71;
} 

vector<double> Foo::quux(){
  return {1.0,2.0,3.0};   
}

'
} // namespace homework
