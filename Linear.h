#pragma once
#include"Root.h"
class Linear:public Root {
	double a;
	double b;
public:
	/// <summary>
	/// конструктор по умолчанию класса Linear
	/// </summary>
	Linear();
	/// <summary>
	/// конструктор класса Linear
	/// </summary>
	/// <param name="a">коэффициент а</param>
	/// <param name="b">коэффициент b</param>
	Linear(double a, double b);
	/// <summary>
	/// деструктор класса Linear
	/// </summary>
	~Linear();
	/// <summary>
	/// метод класса Linear, вычисл€ющий корень линейного уравнени€
	/// </summary>
	void get_root_calc() override;
	/// <summary>
	/// метод класса Linear, реализующий вывод корн€ линейного уравнени€ на экран
	/// </summary>
	void print() override;
};
	