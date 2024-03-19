#pragma once
#include<string>
class Luquid {
protected:
	std::string* name;
	double* density;
public:
	///<summary>����������� �� ��������� ������ Luquid</summary>
	Luquid();
	///<summary>����������� ������ Luquid</summary>
	///<param name= "std::string name - ">�������� ��������</param>
	///<param name= "density - ">��������� ��������</param>
	Luquid(std::string name, double density);
	///<summary>����������� ���������� ������ Luquid</summary>
	virtual ~Luquid();
	///<summary>������� - ������ ��� ���� density</summary>
	///<param name= "density - ">��������� ��������</param>
	void set_density(double value);
	///<summary>����� ������ Luquid, ����������� �������� �������� ���� density</summary>
	///<param name= "newdensity - ">��������, �� ������� ���������� ��������� ��������</param>
	void change_density(double newdensity);
	///<summary>������� - ������ ��� ���� density</summary>
	///<returns>�������� ���� density</returns>
	double get_density();
};