/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "./include/as1.hpp"
#include "./include/as2.hpp"
#include "./include/as2.hpp"
#include <iostream>
using namespace std;

namespace homework {
void printHello() { std::cout << "Hello, World!" << std::endl; }

int AddOneRef(int &x) {  
    cout << ++x << endl;
    return 0; 
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
}; 

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

}