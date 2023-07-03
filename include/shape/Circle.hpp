#pragma once

#include "Shape.hpp"

class Circle : public Shape
{
public:
    Circle(int x, int y, const std::string& color, int radius);
    Circle(const Circle& source);
    Circle* clone() override;
    std::string toString();
private:
    int radius;
};