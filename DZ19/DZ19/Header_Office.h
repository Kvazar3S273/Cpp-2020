//#pragma once
//#include <iostream>
//#include <conio.h>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//void Ukr()	//створимо функцію, яка буде задавати формат укр. мови у ввід-вивід
//{
//	setlocale(LC_CTYPE, "ukr");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//}
//
//void Color(int color)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//
//class Workmate
//{
////private:
//public:
//	double salary;
//	string name;
//	Workmate()
//	{
//	}
//	class Date
//	{
//	public:
//		int day;
//		int month;
//		int year;
//		Date()
//		{
//		}
//		Date(int dd, int mm, int yy)
//		{
//			day = dd;
//			month = mm;
//			year = yy;
//		}
//	};
//	
//	Date employment;
//
//	string GetName()
//	{
//		return name;
//	}
//	double GetSalary()
//	{
//		return salary;
//	}
//	virtual void Show() 
//	{
//		cout << "Співробітник\t" << name << endl;
//		cout << "Працює на фірмі з " << employment.day << " " << employment.month << " " << employment.year << " року" << endl;
//		cout << "Отримує заробітну плату " << salary << endl;
//	}
//	Workmate(string name, double salary, int day, int month, int year)
//	{
//		this->name = name;
//		this->salary = salary;
//		this->employment.day = day;
//		this->employment.month = month;
//		this->employment.year = year;
//
//	}
//};
//
//class Employee :public Workmate
//{
//private:
//	double premium = 0.03;
//	double max_premium = 0.3;
//public:
//	Employee(string name, double salary, int day, int month, int year) :Workmate()
//	{
//		this->name = name;
//		this->salary = salary;
//		this->employment.day = day;
//		this->employment.month = month;
//		this->employment.year = year;
//	}
//	void Show() override
//	{
//		cout << "Я працівник" << endl;
//	}
//};
//
//class Manager :public Workmate
//{
//private:
//	double premium = 0.05;
//	double max_premium = 0.4;
//	double under_premium = 0.005;
//public:
//	Manager(string name, double salary, int day, int month, int year) :Workmate()
//	{
//		this->name = name;
//		this->salary = salary;
//		this->employment.day = day;
//		this->employment.month = month;
//		this->employment.year = year;
//	}
//	void Show() override
//	{
//		cout << "Я менеджер" << endl;
//	}
//};
//
//class Seller :public Workmate
//{
//private:
//	double premium = 0.01;
//	double max_premium = 0.35;
//	double under_premium = 0.003;
//public:
//	Seller(string name, double salary, int day, int month, int year) :Workmate()
//	{
//		this->name = name;
//		this->salary = salary;
//		this->employment.day = day;
//		this->employment.month = month;
//		this->employment.year = year;
//	}
//	void Show() override
//	{
//		cout << "Я продавець" << endl;
//	}
//};
//
//enum class Workers
//{
//	Manager, Seller, Employee
//};
