#include "../include/as1.hpp"
#include <iostream>

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
}