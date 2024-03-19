#pragma once
#include "Root.h"
class Square : public Root {
    double a;
    double b;
    double c;
public:
    /// <summary>
    /// ����������� �� ��������� ������ Square
    /// </summary>
    Square();
    /// <summary>
    /// ����������� ������ Square
    /// </summary>
    /// <param name="a">����������� �</param>
    /// <param name="b">����������� b</param>
    /// <param name="c">����������� c</param>
    Square(double a, double b, double c);
    /// <summary>
    /// ���������� ������ Square
    /// </summary>
    ~Square();
    /// <summary>
    /// ����� ������ Square, ����������� ����� ����������� ���������
    /// </summary>
    void get_root_calc() override;
    /// <summary>
    /// ����� ������ Square, ����������� ����� ������ ����������� ��������� �� �����
    /// </summary>
    void print() override;
};