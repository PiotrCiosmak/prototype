#pragma once

#include <iostream>

class Shape
{
public:
    Shape(int x, int y, std::string color);
    Shape(const Shape& source);
    virtual Shape* clone() = 0;
    virtual std::string toString() =0;
protected:
    int x;
    int y;
    std::string color;
};