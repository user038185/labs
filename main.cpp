#include "Linear.h"
#include "Square.h"
#include <iostream>
int main() {
    setlocale(LC_ALL, "Rus");
    Root* equation1 = new Linear(0.0, 0.0);
    equation1->print();
    std::cout << std::endl;
    Root* equation2 = new Square(0.0, 9.0, 5.0);
    equation2->print();
}