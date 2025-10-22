#pragma once

#include <string>
using namespace std;

namespace homework {
// Hint: Lecture 5 slides

// As 3.1 Lets create our own type in C++ and use it for a custom class of
// fruits 
// (a) TO DO: Implement your type (Hint: enum class). Name it "Color" and add three colors:
// red, green, yellow
enum class Color {red, green, yellow};

// (b) TO DO: Implement a class called "Fruit" that has a constructor taking a
// string and a "Color" and two methods: "getName" and "getColor" Also implement
// a pure virtual method "getTaste" that returns a string
class Fruit {
public:
    Fruit()=default;
    Fruit(string name, Color color):_name{name}, _color{color} {};
    string getName();
    Color getColor();
    virtual string getTaste() const=0;
private:
    string _name;
    Color _color;
};
// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor
class Apple: public Fruit{
public:
    Apple()=default;
    Apple(Color color): Fruit("apple", color) {};
    string getTaste() const override;
};
}
 // namespace homework
