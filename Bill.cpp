#include "Bill.h"
Bill::Bill() :
	surname(new std::string("0")),
	number_tel(new std::string("0")),
	rate_min(new double(0)),
	discount(new double(0)),
	begin_talk(new Time[1]),
	end_talk(new Time[1]),
	amount(new double(0)) {}


Bill::Bill(std::string surname, std::string number_tel, double rate_min, double discount, Time& begin_talk, Time& end_talk) :
	surname(new std::string(surname)),
	number_tel(new std::string(number_tel)),
	rate_min(new double(rate_min)),
	discount(new double(discount)),
	begin_talk(new Time(begin_talk)),
	end_talk(new Time(end_talk)),
	amount(new double(0)) {}

Bill::Bill(const Bill& other) :
	surname(new std::string(*other.surname)),
	number_tel(new std::string(*other.number_tel)),
	rate_min(new double(*other.rate_min)),
	discount(new double(*other.discount)),
	begin_talk(new Time(*other.begin_talk)),
	end_talk(new Time(*other.end_talk)),
	amount(new double(0)) {}

Bill::~Bill()
{
	delete surname;
	delete number_tel;
	delete rate_min;
	delete discount;
	delete begin_talk;
	delete end_talk;
	delete amount;
}

Bill& Bill::operator=(const Bill& other)
{
	if (this != &other) {
		*surname = *other.surname;
		*number_tel = *other.number_tel;
		*rate_min = *other.rate_min;
		*discount = *other.discount;
		*begin_talk = *other.begin_talk;
		*end_talk = *other.end_talk;
		*amount = *other.amount; 
	}
	return *this;
}

void Bill::set_surname(std::string value)
{
	*surname = value;
}

void Bill::set_number_tel(std::string value)
{
	*number_tel = value;
}

void Bill::set_rate_min(double value)
{
	*rate_min = value;
}

void Bill::set_discount(double value)
{
	*discount = value;
}

void Bill::set_begin_talk(Time& value)
{
	*begin_talk = value;
}

void Bill::set_end_talk(Time& value)
{
	*end_talk = value;
}
//
//void Bill::set_amount(double value)
//{
//	*amount = value;
//}

std::string Bill::get_surname()
{
	return *surname;
}

std::string Bill::get_number_tel()
{
	return *number_tel;
}

double Bill::get_rate_min()
{
	return *rate_min;
}

double Bill::get_discount()
{
	return *discount;
}

Time Bill::get_begin_talk()
{
	return *begin_talk;
}

Time Bill::get_end_talk()
{
	return *end_talk;
}

double Bill::get_amount()
{
	return *amount;
}

void Bill::money()
{
	Time time_talk = *end_talk - *begin_talk;

	int m = time_talk.minu(time_talk);
	double presum = m * 1.0 * *rate_min;
	double sum = presum * (1 - *discount / 100);
	*amount = (sum);
}

std::string Bill::toString()
{
	std::string s = "Сумма к оплате: ";
	s += std::to_string(double(*amount));
	return s;
}



