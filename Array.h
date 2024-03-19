#pragma once
template <typename T>
/// <summary>
/// Класс-шаблон массива с задаваемыми пределами инексов
/// </summary>
class Array {
    T* values;
    int a;
    int b;


public:
    /// <summary>
    /// Конструктор по умолчанию
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
    /// Деструктор
    /// </summary>
    ~Array() {
        delete[] values;
    }
    /// <summary>
    /// Конструктор копирования
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
    /// Перегруженный оператор присваивания
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
    /// Оператор задачи индекса
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
    /// Внутренний класс итератор
    /// </summary>
    class Iterator {
        T* ptr;

    public:
        /// <summary>
        /// Конструктор
        /// </summary>
        /// <param name="p"></param>
        Iterator(T* p) : ptr(p) {}
        /// <summary>
        /// Указатель на текущий элемент
        /// </summary>
        /// <returns></returns>
        T& operator*() const {
            if (ptr) 
                return *ptr; 
        }
        /// <summary>
        /// Увеличение позиции итератора на 1
        /// </summary>
        /// <returns></returns>
        Iterator& operator++() { ++ptr; return *this; }
        /// <summary>
        /// Сравнение на неравенство
        /// </summary>
        /// <param name="other"></param>
        /// <returns></returns>
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
    };

    /// <summary>
    /// Указатель на первый элемент
    /// </summary>
    /// <returns></returns>
    Iterator begin() const { return Iterator(values); }
    /// <summary>
    /// Указатель на последний элемент
    /// </summary>
    /// <returns></returns>
    Iterator end() const { return Iterator(values+b-a+1); }
    /// <summary>
    /// Нешаблоннная перегруженнная функция вывода
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
    /// Нешаблонная перегруженная функция ввода
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



