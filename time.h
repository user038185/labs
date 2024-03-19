#pragma once
#include <iostream>

class Time {
    int* hour;
    int* minute;
    int* second;

public:
    Time();

    /// <summary>
    /// конструктор
    /// </summary>
    /// <param name="hour">часы</param>
    /// <param name="minute">минуты</param>
    /// <param name="second">секунды</param>
    Time(int hour, int minute, int  second);

    /// <summary>
    /// конструктор копирования
    /// </summary>
    /// <param name="other">время</param>
    Time(const Time& other);

    ~Time();

    /// <summary>
    /// Перегруженный оператор присваивания
    /// </summary>
    /// <param name="other">время</param>
    /// <returns>час,минута,секунда</returns>
    Time& operator=(const Time& other);

    /// <summary>
    /// Перегруженный оператор сложения
    /// </summary>
    /// <param name="other">время</param>
    /// <returns>час,минута,секунда</returns>
    Time operator+(const Time& other)const;

    /// <summary>
    /// перегруженный оператор вычитания
    /// </summary>
    /// <param name="other">время</param>
    /// <returns>час,минута,секунда</returns>
    Time operator-(const Time& other)const;

    int minu(const Time& t);

    bool operator==(const Time& other)const;


    bool operator!=(const Time& other)const;


    bool operator<(const Time& other)const;


    bool operator>(const Time& other)const;

    /// <summary>
    /// перегруженная операция ввода
    /// </summary>
    /// <param name="os">поток</param>
    /// <param name="time">время</param>
    /// <returns>час,минута,секунда</returns>
    friend std::ostream& operator<<(std::ostream& os, const Time& time);

    /// <summary>
    /// перегруженная операция вывода
    /// </summary>
    /// <param name="is">поток</param>
    /// <param name="time">время</param>
    /// <returns>час,минута,секунда</returns>
    friend std::istream& operator>>(std::istream& is, Time& time);
};
