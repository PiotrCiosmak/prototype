#include "../../include/shape/Shape.hpp"

Shape::Shape(int x, int y, std::string color) : x{x}, y{y}, color{std::move(color)}
{}

Shape::Shape(const Shape& source) : x{source.x}, y{source.y}, color{source.color}
{}
