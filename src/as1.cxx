#include "../include/as1.hpp"
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
