#pragma once
#include<string>
class Luquid {
protected:
	std::string* name;
	double* density;
public:
	///<summary>Конструктор по умолчанию класса Luquid</summary>
	Luquid();
	///<summary>Конструктор класса Luquid</summary>
	///<param name= "std::string name - ">название вещества</param>
	///<param name= "density - ">плотность вещества</param>
	Luquid(std::string name, double density);
	///<summary>Виртуальный деструктор класса Luquid</summary>
	virtual ~Luquid();
	///<summary>Функция - сеттер для поля density</summary>
	///<param name= "density - ">плотность вещества</param>
	void set_density(double value);
	///<summary>Метод класса Luquid, позволяющий изменить значение поля density</summary>
	///<param name= "newdensity - ">Величина, на которую увеличится плотность вещества</param>
	void change_density(double newdensity);
	///<summary>Функция - геттер для поля density</summary>
	///<returns>Значение поля density</returns>
	double get_density();
};