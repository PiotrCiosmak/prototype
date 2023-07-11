#include "../include/Circle.hpp"

Circle::Circle(int x, int y, const std::string& color, int radius)
        : Shape{x, y, color}, radius{radius}
{}

std::shared_ptr<Shape> Circle::clone()
{
    return std::make_shared<Circle>(*this);
}

std::string Circle::toString()
{
    return "x: " + std::to_string(x) + ", y: " + std::to_string(y) +
           ", color: " + color + ", radius: " + std::to_string(radius);
}
