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
    cout << ++x << endl;
}

bool isOdd(int x) { 
     if (x%2==1)
    {
        cout << true << endl;
    }
    else {
        cout << false << endl;
    }
    return 0; 
}

int floatToInt(float y) { 
    int i = static_cast<int>(y);
    cout << i << endl;
    return 0; }

int factorial(int n) {
    int x=1; 
    int f=1;
    if(n>0){
        while (x<=n)
        {
            f=f*x;
            ++x;
        }
        cout << f << endl;
    }
    else{
        cout << -1 << endl;

    }
    return 0; }

int Foo::bar() { 
  return 42; 
}
float Foo::baz(){
  x=2.71;
  return 3.14; 
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
}

int main(){
  // Example for as1.0
  homework::printHello();
  int x=2;
  homework::AddOneRef(x);
  homework::isOdd(1);
  homework::isOdd(2);
  homework::floatToInt(3.8);
  homework::factorial(4);
  homework::factorial(-2);
  homework::Foo foo{};
  cout << foo.bar() << endl;
  cout << foo.baz() << endl;
  cout << foo.x << endl;
  vector<double> v=foo.quux();
  for (auto i:v)
    cout << i << " ";
  cout << endl;
  homework::fVector2D first{1.2,2.3};
  homework::fVector2D second{3.4,5.6};
  homework::fVector2D third{1.2,2.3};
  cout << (first+second) << endl;
  cout << (first==second) << endl;
  cout << (first==third) << endl;
}