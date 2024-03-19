#include "Linear.h"
#include<iostream>

Linear::Linear() :a(0), b(0) {}

Linear::Linear(double a, double b) : a(a), b(b) {}

Linear::~Linear(){}

void Linear::get_root_calc() {
    nRoots = 1;
    if (roots) delete[] roots;
    roots = new double[nRoots];
    roots[0] = -b / a;
    if (a != 0) {
       std::cout << (-b) / a;
    }
    if ((a == 0) && (b == 0)) {
       std:: cout << "Решением данного уравнения является любое число";
    }
    if ((a == 0) && (b != 0)) {
       std:: cout << "Данное уравнение не имеет корней";
    }
}

void Linear::print() {
   std:: cout << "Ответ: " << std::endl;
    get_root_calc();
}