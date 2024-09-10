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
    cout << "Введіть прівище: ";
    getline (cin, last_name);

    string first_name;
    cout << "Введіть ім'я: ";
    getline (cin, first_name);

    string middle_name;
    cout << "Введіть по батькові: ";
    getline (cin, middle_name);

    int age;
    cout << "Введіть вік: ";
    cin >> age;
    // clear chache

    cin.ignore();

    string live_place;
    cout << "Введіть місце проживання: ";
    getline (cin, live_place);

    cout << "\nВаші дані:" << endl;
    cout << "Прізвище " << last_name << endl;
    cout << "Ім'я " << first_name << endl;
    cout << "По батькові " << middle_name << endl;
    cout << "Вік " << age << endl;
    cout << "Місце проживання " << live_place << endl;

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
