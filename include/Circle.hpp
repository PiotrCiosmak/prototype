#pragma once

#include "Shape.hpp"

class Circle : public Shape
{
public:
    Circle(int x, int y, const std::string& color, int radius);
    Circle(const Circle& source) = default;
    [[nodiscard]] std::shared_ptr<Shape> clone() override;
    [[nodiscard]] std::string toString() override;

private:
    int radius;
};