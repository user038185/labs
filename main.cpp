#include "time.h"
#include <iostream>
#include "Bill.h"
#include <windows.h>

int main() {

    setlocale(LC_ALL, "Rus");
    Time time1;
    Time time2;
    std::cin >> time1;
    std::cin >> time2;

    Bill bill("Иванов", "89957808298", 20, 3, time1, time2);
    bill.money();
    std::cout << bill.toString();

    return 0;
}