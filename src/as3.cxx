#include "../include/as3.hpp"
#include <iostream>

namespace homework {
std::string Fruit::getName() const {
        return _name;
}
Color Fruit::getColor() const {
        return _color;
}
std::string Apple::getTaste() const {
  return "sweet";
}
} // namespace homework

