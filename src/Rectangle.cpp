#include "../include/Rectangle.hpp"

Rectangle::Rectangle(int x, int y, const std::string& color, int width, int height)
        : Shape{x, y, color}, width{width}, height{height}
{}

Rectangle::Rectangle(const Rectangle& source)
        : Shape{source}, width{source.width}, height{source.height}
{
}

std::shared_ptr<Shape> Rectangle::clone()
{
    return std::make_shared<Rectangle>(*this);
}

std::string Rectangle::toString()
{
    return "x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", color: " + color +
           ", width: " + std::to_string(width) + ", height: " + std::to_string(height);

}
