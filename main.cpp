#include<iostream>
#include"Array.h"
int main() {
    setlocale(LC_ALL, "Rus");
    int a, b;
    std::cin >> a >> b;
    Array<int> arr1(a,b);
    std::cin >> arr1;
    std::cout << arr1 << std::endl;
    a = 8;
    b = 10;
    Array<double> arr2(a,b);
    std::cin >> arr2;
    std::cout << arr2 << std::endl;
    
    return 0;
}