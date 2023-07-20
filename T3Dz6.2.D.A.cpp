// T3Dz6.2.D.A

#include <Windows.h>
#include "class_counter.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
     setlocale(LC_ALL,"rus");
     SetConsoleOutputCP(1251);
     SetConsoleCP(1251);

    string init_request;
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> init_request;
    
    char request;
    
    if (init_request == "да") {
        int i;
        cout << "Введите начальное значение счётчика: ";
        cin >> i;        
        Counter count(i);
        
        //бесконечный цикл
        for (;;) {
            cout << "Введите команду ('+', '-', '=' или 'x'): "; cin >> request;//x английская
            switch (request) {
            case '=': count.Print(); break;
            case '+': count.Increment(); break;
            case '-': count.Decrement(); break;
            case 'x': {cout << "До свидания!\n"; return 0; }
                    //   defoult: break;
            }
        }
    }
    else if (init_request == "нет") {
        Counter count;
        //бесконечный цикл
        for (;;) {
            cout << "Введите команду ('+', '-', '=' или 'x'): "; cin >> request;//x английская
            switch (request) {
            case '=': count.Print(); break;
            case '+': count.Increment(); break;
            case '-': count.Decrement(); break;
            case 'x': {cout << "До свидания!\n"; return 0; }
                    //   defoult: break;
            }
        }
    }
    else if (init_request != "нет") { cout << "Вводи внимательнее! Перезапускай программу"; return 0; }

    return 0;
}
