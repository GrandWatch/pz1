// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    system("color E4");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string last_name;
    cout << "������ ������: ";
    getline (cin, last_name);

    string first_name;
    cout << "������ ��'�: ";
    getline (cin, first_name);

    string middle_name;
    cout << "������ �� �������: ";
    getline (cin, middle_name);

    int age;
    cout << "������ ��: ";
    cin >> age;
    // clear chache

    cin.ignore();

    string live_place;
    cout << "������ ���� ����������: ";
    getline (cin, live_place);

    cout << "\n���� ���:" << endl;
    cout << "������� " << last_name << endl;
    cout << "��'� " << first_name << endl;
    cout << "�� ������� " << middle_name << endl;
    cout << "³� " << age << endl;
    cout << "̳��� ���������� " << live_place << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
