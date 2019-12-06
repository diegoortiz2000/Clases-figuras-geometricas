#include <iostream>
#include <string>

class shape {
private:
    double area;
public:
    double SetArea(double area) {
        this->area = area;
    }

    double GetArea() {
        return this->area;
    }

    shape() {
        area = 0;
    }
};

class rectangle : public shape {
private:
    double length;
    double width;
public:
    double SetLength(double length) {
        this->length = length;
    }

    double GetLength() {
        return this->length;
    }

    rectangle() {
        length = 0;
        width = 0;
    }

    double getArea() {
        return 420;
    };
};

class circle : public shape {
private:
    double radius;
public:
    double SetRadius(double radius) {
        this->radius = radius;
    }

    double GetRadius() {
        return this->radius;
    }

    circle() {
        radius = 0;
    }

    double getArea() {
        return 420;
    };
};

int main() {
    std::cout << "Question 3" << std::endl;
    circle circle1();
    rectangle rectangle1();
    return 0;
}