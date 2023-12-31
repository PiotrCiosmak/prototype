#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(int x, int y, const std::string& color, int width, int height);
    Rectangle(const Rectangle& source);
    std::shared_ptr<Shape> clone() override;
    std::string toString() override;

private:
    int width;
    int height;
};