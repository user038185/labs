#pragma once
#include "time.h"
#include <string>
class Bill {
	std::string* surname;
	std::string* number_tel;
	double* rate_min;
	double* discount;
	Time* begin_talk;
	Time* end_talk;
	double* amount;
public:
	Bill();
	/// <summary>
	/// �����������
	/// </summary>
	/// <param name="surname">�������</param>
	/// <param name="number_tel">����� ��������</param>
	/// <param name="rate_min">��������� ������ ���������</param>
	/// <param name="discount">������������ ������ � ���������</param>
	/// <param name="begin_talk">����� ������ ���������</param>
	/// <param name="end_talk">�����, ����� �������� ����������</param>
	Bill(std::string surname, std::string number_tel, double rate_min, double discount, Time& begin_talk, Time& end_talk);
	Bill(const Bill& other);
	~Bill();
	Bill& operator=(const Bill& other);
	void set_surname(std::string value);
	void set_number_tel(std::string value);
	void set_rate_min(double value);
	void set_discount(double value);
	void set_begin_talk(Time& value);
	void set_end_talk(Time& value);
	//void set_amount(double value);
	std::string get_surname();
	std::string get_number_tel();
	double get_rate_min();
	double get_discount();
	Time get_begin_talk();
	Time get_end_talk();
	double get_amount();
	///<summary>
	/// �������, ������ ��������� ����� � ������ � ������, ��������� � amount
	///</summary>
	void money();
	std::string toString();


};

