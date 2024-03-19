#pragma once
#include "Root.h"
class Square : public Root {
    double a;
    double b;
    double c;
public:
    /// <summary>
    /// конструктор по умолчанию класса Square
    /// </summary>
    Square();
    /// <summary>
    /// конструктор класса Square
    /// </summary>
    /// <param name="a">коэффициент а</param>
    /// <param name="b">коэффициент b</param>
    /// <param name="c">коэффициент c</param>
    Square(double a, double b, double c);
    /// <summary>
    /// деструктор класса Square
    /// </summary>
    ~Square();
    /// <summary>
    /// метод класса Square, вычисл€ющий корни квадратного уравнени€
    /// </summary>
    void get_root_calc() override;
    /// <summary>
    /// метод класса Square, реализующий вывод корней квадратного уравнени€ на экран
    /// </summary>
    void print() override;
};