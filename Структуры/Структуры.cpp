

//Минимум для c++
#include <iostream> // стандартная библиотека с функциями
#include <iomanip> /*Манипуляция вводами данных, ввод консоли*/
#include <string> // объявлять переменную строкой
#include <stdlib.h> //содержаться классы (тренеры, векторы)
#include <cmath> //Возведение в степень
#include <windows.h> //доступ к API
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <vector>
#include <sstream>
using namespace std; // рабочее пространство, чтобы не писать каждый раз std

struct lopa {
    short age;
    string name;
};
void createLopa(lopa& a, lopa& n, short age, string name)
{
    for (size_t i = 0; i < 3; i++)
    {
        a[i].age = age;
        n.name = name;
    }

};

//struct Person
//{
//    short age;
//    std::string name;
//};
//
//void person_new(Person& p, short age, std::string name)
//{
//    p.age = age;
//    p.name = name;
//}
//
//bool compare(Person p1, Person p2) 
//{
//    return p1.age > p2.age;
//}
//
//int main()
//{
//    Person array[10]{ {21, "Kolya"}, {24, "Nikola"} };
//    Person p, p2;
//    person_new(p, 27, "Kolya");
//    std::cout << p.age << " " << p.name << std::endl;
//    std::cout << sizeof(p);
//    return 0;
//}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    lopa p[3], n[3];

}

