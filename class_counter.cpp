#include "class_counter.h"
#include <iostream>
Counter::Counter(int num) { this->num = num; }//����������� � �����������
Counter::Counter() { num = 1; } //����������� ��� ����������
//������
void Counter::Print() {std::cout << num <<std::endl; }
void Counter::Increment() { num++; }
void Counter::Decrement() { num--; }