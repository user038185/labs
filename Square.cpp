#pragma once
#include "Square.h"
#include <cmath>
#include <iostream>
Square::Square() : a(0), b(0), c(0) {};

Square::Square(double a, double b, double c) : a(a), b(b), c(c) {};

Square::~Square() {}

void Square::get_root_calc() {
    if ((a != 0) && (b != 0) && (c == 0)) {
        double x1 = 0;
        std::cout << x1;
        std::cout << std::endl;
        double x2 = (-b / a);
        std::cout << x2;
    }
    if ((a != 0) && (b == 0) && (c == 0)) {
        double x = 0;
        std::cout << x;
    }
    if ((a != 0) && (b == 0) && (c != 0)) {
        if ((-c) / a > 0) {
            double x1 = -(sqrt((-c) / a > 0));
            std::cout << x1;
            std::cout << std::endl;
            double x2 = sqrt((-c) / a > 0);
            std::cout << x2;
        }
        else {
            std::cout << "Hет корней";
        }
    }
    if ((a == 0) && (b == 0) && (c != 0)) {
        std::cout << "Hет корней";
    }
    if ((a != 0) && (b != 0) && (c != 0)) {
        double D = b * b - 4 * a * c;
        if (D < 0) {
            std::cout << "Hет корней";
        }
        if (D > 0) {
            double x1 = (((-b) + sqrt(D)) / (2 * a));
            std::cout << x1;
            std::cout << std::endl;
            double x2 = (((-b) - sqrt(D)) / (2 * a));
            std::cout << x2;
        }
        if (D == 0) {
            double x = (-b) / 2 * a;
            std::cout << x;
        }
    }
    if ((a == 0) && (b != 0) && (c != 0)) {
        std::cout << (-c) / b;
    }
    else {
        std::cout << "Х - любое число";
    }
}
void Square::print() {
    std::cout << "Ответ: " << std::endl;
    get_root_calc();
}

