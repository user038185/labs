#pragma once
template <typename T>
/// <summary>
/// �����-������ ������� � ����������� ��������� �������
/// </summary>
class Array {
    T* values;
    int a;
    int b;


public:
    /// <summary>
    /// ����������� �� ���������
    /// </summary>
    Array() {
        values = new T[1];
        values[0] = 0;
        a = 0;
        b = 0;
    }
    Array(int c, int d) {
        a = c;
        b = d;
        values = new T[b - a + 1];
    }
    /// <summary>
    /// ����������
    /// </summary>
    ~Array() {
        delete[] values;
    }
    /// <summary>
    /// ����������� �����������
    /// </summary>
    /// <param name="other"></param>
    Array (const Array& other) {
        a = other.a;
        b = other.b;
        values = new T[b - a + 1];
        for (int i = 0; i < b - a + 1; i++) {
            values[i] = other.values[i];
        }
    }
    /// <summary>
    /// ������������� �������� ������������
    /// </summary>
    /// <param name="other"></param>
    /// <returns></returns>
    Array& operator=(const Array& other) {
        if (this != &other) { 
            delete[]values;
            a = other.a;
            b = other.b;
            values = new T[b - a + 1];
            for (int i = 0; i < b - a + 1; i++) {
                values[i] = other.values[i];
            }
        }
            return *this;
    }
    /// <summary>
    /// �������� ������ �������
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    T& operator[](int index) {
        if (index<a || index>b) {
            return T();
        }
        return values[index - a];
    }
    /// <summary>
    /// ���������� ����� ��������
    /// </summary>
    class Iterator {
        T* ptr;

    public:
        /// <summary>
        /// �����������
        /// </summary>
        /// <param name="p"></param>
        Iterator(T* p) : ptr(p) {}
        /// <summary>
        /// ��������� �� ������� �������
        /// </summary>
        /// <returns></returns>
        T& operator*() const {
            if (ptr) 
                return *ptr; 
        }
        /// <summary>
        /// ���������� ������� ��������� �� 1
        /// </summary>
        /// <returns></returns>
        Iterator& operator++() { ++ptr; return *this; }
        /// <summary>
        /// ��������� �� �����������
        /// </summary>
        /// <param name="other"></param>
        /// <returns></returns>
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
    };

    /// <summary>
    /// ��������� �� ������ �������
    /// </summary>
    /// <returns></returns>
    Iterator begin() const { return Iterator(values); }
    /// <summary>
    /// ��������� �� ��������� �������
    /// </summary>
    /// <returns></returns>
    Iterator end() const { return Iterator(values+b-a+1); }
    /// <summary>
    /// ������������ �������������� ������� ������
    /// </summary>
    /// <param name="os"></param>
    /// <param name="arr"></param>
    /// <returns></returns>
    friend std::ostream& operator<<(std::ostream& os, const  Array<T>& arr) {
        for (const T& value:arr) {
            os << value << " ";
        }
        return os;
    }
    /// <summary>
    /// ����������� ������������� ������� �����
    /// </summary>
    /// <param name="is"></param>
    /// <param name="arr"></param>
    /// <returns></returns>
    friend std::istream& operator>>(std::istream& is, Array<T>& arr) {
        for ( T& value : arr) {
            is >> value;
        }
        return is;
    }
};



