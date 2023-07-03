#include "../../include/shape/Circle.hpp"

Circle::Circle(int x, int y, const std::string& color, int radius) : Shape{x, y, color}, radius{radius}
{}

Circle::Circle(const Circle& source) : Shape{source}, radius{source.radius}
{}

Circle* Circle::clone()
{
    return new Circle(*this);
}

std::string Circle::toString()
{
    return "x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", color: " + color + ", radius: " + std::to_string(radius);
}
