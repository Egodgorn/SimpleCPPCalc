// c++0010.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");
    int a,b,c;

    cout << "������� ����� 1: ",cin >> a ;
    cout << "������� ����� 2: ", cin >> b ;

    cout << "��� ������ �������?"<< endl,cout << " 1 - �������� \n 2 - ��������� \n 3 - ��������� \n 4 - ������� \n";
    cin >> c;

    switch (c)
    {
    case 1:
        cout << "�����: " << a + b ;
        break;
    case 2:
        cout << "�����: " << a - b;
        break;
    case 3:
        cout << "�����: " << a * b;
        break;
    case 4:
        cout << "�����: " << (double)a / b;
        break;
    default:
        cout << "����������� ��������";
        break;
    }

}