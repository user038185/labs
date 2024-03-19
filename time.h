#pragma once
#include <iostream>

class Time {
    int* hour;
    int* minute;
    int* second;

public:
    Time();

    /// <summary>
    /// �����������
    /// </summary>
    /// <param name="hour">����</param>
    /// <param name="minute">������</param>
    /// <param name="second">�������</param>
    Time(int hour, int minute, int  second);

    /// <summary>
    /// ����������� �����������
    /// </summary>
    /// <param name="other">�����</param>
    Time(const Time& other);

    ~Time();

    /// <summary>
    /// ������������� �������� ������������
    /// </summary>
    /// <param name="other">�����</param>
    /// <returns>���,������,�������</returns>
    Time& operator=(const Time& other);

    /// <summary>
    /// ������������� �������� ��������
    /// </summary>
    /// <param name="other">�����</param>
    /// <returns>���,������,�������</returns>
    Time operator+(const Time& other)const;

    /// <summary>
    /// ������������� �������� ���������
    /// </summary>
    /// <param name="other">�����</param>
    /// <returns>���,������,�������</returns>
    Time operator-(const Time& other)const;

    int minu(const Time& t);

    bool operator==(const Time& other)const;


    bool operator!=(const Time& other)const;


    bool operator<(const Time& other)const;


    bool operator>(const Time& other)const;

    /// <summary>
    /// ������������� �������� �����
    /// </summary>
    /// <param name="os">�����</param>
    /// <param name="time">�����</param>
    /// <returns>���,������,�������</returns>
    friend std::ostream& operator<<(std::ostream& os, const Time& time);

    /// <summary>
    /// ������������� �������� ������
    /// </summary>
    /// <param name="is">�����</param>
    /// <param name="time">�����</param>
    /// <returns>���,������,�������</returns>
    friend std::istream& operator>>(std::istream& is, Time& time);
};
