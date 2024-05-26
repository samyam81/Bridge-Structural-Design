#include <iostream>
#include <memory>

class Color {
public:
    virtual void applyColor() = 0;
};

class Red : public Color {
public:
    void applyColor() override {
        std::cout << "Red" << std::endl;
    }
};

class Green : public Color {
public:
    void applyColor() override {
        std::cout << "Green" << std::endl;
    }
};

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
private:
    std::shared_ptr<Color> color;

public:
    Circle(std::shared_ptr<Color> color) : color(color) {}

    void draw() override {
        std::cout << "Drawing Circle in ";
        color->applyColor();
    }

    void setColor(std::shared_ptr<Color> newColor) {
        color = newColor;
    }
};

class Square : public Shape {
private:
    std::shared_ptr<Color> color;

public:
    Square(std::shared_ptr<Color> color) : color(color) {}

    void draw() override {
        std::cout << "Drawing Square in ";
        color->applyColor();
    }

    void setColor(std::shared_ptr<Color> newColor) {
        color = newColor;
    }
};

int main() {
    std::shared_ptr<Color> red = std::make_shared<Red>();
    std::shared_ptr<Color> green = std::make_shared<Green>();

    std::shared_ptr<Circle> circle = std::make_shared<Circle>(red);
    circle->draw();

    std::shared_ptr<Square> square = std::make_shared<Square>(green);
    square->draw();

    circle->setColor(green);
    std::cout << "Changing Circle color to ";
    circle->draw();

    return 0;
}
