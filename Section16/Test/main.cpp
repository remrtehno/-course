#include <iostream>

class Shape {
public:
     void draw() {
        // Base class implementation
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        // Derived class implementation
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        // Derived class implementation
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;

    Shape& shapeRef1 = circle;
    Shape& shapeRef2 = square;

    shapeRef1.draw();  // Calls Circle's draw() function
    shapeRef2.draw();  // Calls Square's draw() function

    return 0;
}
