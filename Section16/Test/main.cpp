#include <iostream>

class Shape {
public:
     virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        // Derived class implementation
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square_Abstract : public Shape {
public:
    virtual void draw2() = 0;
};

class Square : public Square_Abstract {
    void draw2() {
        // Derived class implementation
        std::cout << "Drawing a square." << std::endl;
    };
    void draw() override {
        // Derived class implementation
        std::cout << "Drawing a square." << std::endl;
    };
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
