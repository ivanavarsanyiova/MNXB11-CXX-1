/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "./include/as1.hpp"
#include "./include/as2.hpp"
#include "./include/as3.hpp"
#include <iostream>
using namespace std;

namespace homework {
void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) {  
    x++;
}

bool isOdd(int x) { 
     if (x%2==1 || x%2==-1) 
    {
        std::cout << true << std::endl;
    }
    else {
        std::cout << false << std::endl;
    }
    return 0; 
}

int floatToInt(float y) { 
    int i = static_cast<int>(y);
    std::cout << i << std::endl;
    return i; 
}

int factorial(int n) {
    int x=1; 
    int f=1;
    if(n>=0){
        while (x<=n)
        {
            f=f*x;
            ++x;
        }
        std::cout << f << std::endl;
    }
    else{
        std::cout << -1 << std::endl;

    }
    return f; 
}

int Foo::bar() { 
  return 42; 
}
float Foo::baz(){
  x=2.71;
  return 3.14;
} 
std::vector<double> Foo::quux(){
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
std::ostream &operator<<(std::ostream& os, const fVector2D& vec) {
  os << "(" << vec.x_ << "," << vec.y_ << ")";
  return os;
}

std::string Fruit::getName() const {
        return _name;
}
Color Fruit::getColor() const {
        return _color;
}
std::string Apple::getTaste() const {
  return "sweet";
}
}

int main(){
  // Example for as1.0
  homework::printHello();
  int x=1;
  homework::AddOneRef(x);
  homework::isOdd(3);
  homework::isOdd(4);
  homework::isOdd(-3);
  homework::isOdd(-4);
  homework::floatToInt(3.14);
  homework::floatToInt(-3.14);
  homework::factorial(0);
  homework::factorial(1);
  homework::factorial(5);
  homework::factorial(-1);


  homework::Foo foo{};
  cout << foo.bar() << endl;
  cout << foo.baz() << endl;
  cout << foo.x << endl;
  vector<double> v=foo.quux();
  for (auto i:v)
    cout << i << " ";
  cout << endl;
  homework::fVector2D v2{1.0,2.5};
  homework::fVector2D w2{3.2,4.8};
  cout << (v2+w2) << endl;
  return 0;
}


