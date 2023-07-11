#include "../include/Shape.hpp"

Shape::Shape(int x, int y, std::string color) : x{x}, y{y}, color{std::move(color)}
{}