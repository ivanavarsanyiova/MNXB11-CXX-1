#include "../include/as2.hpp"
#include <iostream>
using namespace std;

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}
float Foo::baz(){
  return 3.14; 
  x=2.71;
} 
vector<double> Foo::quux(){
  return {1.0,2.0,3.0};   
}

bool fVector2D::operator==(const fVector2D& other) const {
  if (x_==other.x_ and y_==other.y_)
  {
    return true;
  }
  else
    return false;
} 

fVector2D operator+(const fVector2D& lhs, const fVector2D& rhs) {
  return fVector2D(lhs.x_+rhs.x_, lhs.y_+rhs.y_);
}
ostream &operator<<(ostream& os, const fVector2D& vec) {
  os << "(" << vec.x_ << "," << vec.y_ << ")";
  return os;
}
} // namespace homework
