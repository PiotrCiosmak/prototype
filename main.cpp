#include <iostream>
#include <vector>
#include "include/Circle.hpp"
#include "include/Rectangle.hpp"

int main()
{
    std::vector<std::shared_ptr<Shape>> shapes;
    std::shared_ptr<Circle> circle = std::make_shared<Circle>(10, 10, "red", 20);
    shapes.push_back(circle);

    std::shared_ptr<Shape> another_circle = circle->clone();
    shapes.push_back(another_circle);

    std::shared_ptr<Rectangle> rectangle = std::make_shared<Rectangle>(10, 10, "blue", 20, 30);
    shapes.push_back(rectangle);

    std::vector<std::shared_ptr<Shape>> shapes_copy;

    for (const auto& shape: shapes)
    {
        shapes_copy.push_back(shape->clone());
    }

    std::cout << "Shapes:" << std::endl;
    for (const auto& shape: shapes)
    {
        std::cout << shape << "|" << shape->toString() << std::endl;
    }


    std::cout << "Shapes copy:" << std::endl;
    for (const auto& shape: shapes_copy)
    {
        std::cout << shape << "|" << shape->toString() << std::endl;
    }


}
