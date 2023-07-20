#pragma once
class Counter {
private:
    int num;

public:

    Counter(int num);//конструктор с параметрами

    Counter(); //конструктор без параметров         

    void Print();
    void Increment();
    void Decrement();

};