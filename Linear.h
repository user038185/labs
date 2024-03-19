#pragma once
#include"Root.h"
class Linear:public Root {
	double a;
	double b;
public:
	/// <summary>
	/// ����������� �� ��������� ������ Linear
	/// </summary>
	Linear();
	/// <summary>
	/// ����������� ������ Linear
	/// </summary>
	/// <param name="a">����������� �</param>
	/// <param name="b">����������� b</param>
	Linear(double a, double b);
	/// <summary>
	/// ���������� ������ Linear
	/// </summary>
	~Linear();
	/// <summary>
	/// ����� ������ Linear, ����������� ������ ��������� ���������
	/// </summary>
	void get_root_calc() override;
	/// <summary>
	/// ����� ������ Linear, ����������� ����� ����� ��������� ��������� �� �����
	/// </summary>
	void print() override;
};
	