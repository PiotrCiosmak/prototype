#include <iostream>
#include <vector>
#include "include/shape/Circle.hpp"
#include "include/shape/Rectangle.hpp"

int main()
{
    std::vector<Shape*> shapes;
    Circle* circle = new Circle(10, 10, "red", 20);
    shapes.push_back(circle);

    Circle* another_circle = circle->clone();
    shapes.push_back(another_circle);

    Rectangle* rectangle = new Rectangle(10, 10, "blue", 20, 30);
    shapes.push_back(rectangle);

    std::vector<Shape*> shapes_copy;

    for (Shape* shape: shapes)
    {
        shapes_copy.push_back(shape->clone());
    }

    std::cout << "Shapes:" << std::endl;
    for (Shape* shape: shapes)
    {
        std::cout << shape << "|" << shape->toString() << std::endl;
    }


    std::cout << "Shapes copy:" << std::endl;
    for (Shape* shape: shapes_copy)
    {
        std::cout << shape << "|" << shape->toString() << std::endl;
    }


}
