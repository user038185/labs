#include"Alcohol.h"
#include<iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Alcohol party("водка",940,40);

	party.change_strength(5); 

	party.change_density(2);

	

	cout << party.get_density()<<" "<<party.get_strength();

}