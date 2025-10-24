#include "../include/as3.hpp"
#include <iostream>

namespace homework {
string Fruit::getName() const {
        return _name;
}
Color Fruit::getColor() const {
        return _color;
}
string Apple::getTaste() const {
  return "sweet";
}
} // namespace homework

