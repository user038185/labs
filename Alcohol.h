#pragma once
#include"Lucuid.h"
class Alcohol final: public Luquid
{
	double* strength;
public:
	/// <summary>
	/// ����������� �� ��������� ������ Alcohol
	/// </summary>
	Alcohol();
	/// <summary>
	/// ����������� ������ Alcohol
	/// </summary>
	/// <param name="strength">�������� ��������</param>
	Alcohol(std::string name, double density, double strength);
	/// <summary>
	/// ���������� ������ Alcohol
	/// </summary>
	~Alcohol ();
	/// <summary>
	/// �������� ������ ��� ���� strength
	/// </summary>
	/// <param name="value">�������� ��������</param>
	void set_strength(double value);
	///<summary>����� ������ Luquid, ����������� �������� �������� ���� density</summary>
	///<param name= "newstrength - ">��������, �� ������� ���������� �������� ��������</param>
	void change_strength(double newstrength);
	/// <summary>
	/// ������� ������ ��� ���� strenght
	/// </summary>
	/// <returns>�������� ���� strenght</returns>
	double get_strength();
};