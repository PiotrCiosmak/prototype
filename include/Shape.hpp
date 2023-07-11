#pragma once

#include <iostream>
#include <memory>

class Shape
{
public:
    Shape(int x, int y, std::string color);
    Shape(const Shape& source) = default;
    [[nodiscard]] virtual std::shared_ptr<Shape> clone() = 0;
    [[nodiscard]] virtual std::string toString() = 0;

protected:
    int x;
    int y;
    std::string color;
};