#pragma once
#include"Lucuid.h"
class Alcohol final: public Luquid
{
	double* strength;
public:
	/// <summary>
	/// конструктор по умолчанию класса Alcohol
	/// </summary>
	Alcohol();
	/// <summary>
	/// конструктор класса Alcohol
	/// </summary>
	/// <param name="strength">крепость вещества</param>
	Alcohol(std::string name, double density, double strength);
	/// <summary>
	/// деструктор класса Alcohol
	/// </summary>
	~Alcohol ();
	/// <summary>
	/// фунокция сеттер для поля strength
	/// </summary>
	/// <param name="value">крепость вещества</param>
	void set_strength(double value);
	///<summary>Метод класса Luquid, позволяющий изменить значение поля density</summary>
	///<param name= "newstrength - ">Величина, на которую увеличится крепость вещества</param>
	void change_strength(double newstrength);
	/// <summary>
	/// функция геттер для поля strenght
	/// </summary>
	/// <returns>значение поля strenght</returns>
	double get_strength();
};