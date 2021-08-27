// c++0010.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");
    int a,b,c;

    cout << "ВВедите число 1: ",cin >> a ;
    cout << "ВВедите число 2: ", cin >> b ;

    cout << "Что хотите сделать?"<< endl,cout << " 1 - Сложение \n 2 - Вычитание \n 3 - Умножение \n 4 - Деление \n";
    cin >> c;

    switch (c)
    {
    case 1:
        cout << "Ответ: " << a + b ;
        break;
    case 2:
        cout << "Ответ: " << a - b;
        break;
    case 3:
        cout << "Ответ: " << a * b;
        break;
    case 4:
        cout << "Ответ: " << (double)a / b;
        break;
    default:
        cout << "Неизвестная операция";
        break;
    }

}