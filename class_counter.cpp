#include "class_counter.h"
#include <iostream>
Counter::Counter(int num) { this->num = num; }//конструктор с параметрами
Counter::Counter() { num = 1; } //конструктор без параметров
//методы
void Counter::Print() {std::cout << num <<std::endl; }
void Counter::Increment() { num++; }
void Counter::Decrement() { num--; }