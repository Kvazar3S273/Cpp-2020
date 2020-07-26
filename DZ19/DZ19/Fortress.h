#pragma once
#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

void Ukr()	//створимо функцію, яка буде задавати формат укр. мови у ввід-вивід
{
    setlocale(LC_CTYPE, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
void Color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
//---change line 17 ++

class Shooter
{
protected:
	int ammunitions;	//одиниця амуніції
public:
	Shooter()
	{
		ammunitions = 0;
	}

	Shooter(int ammunitions)	
	{
		this->ammunitions = ammunitions;
	}

	void SetAmmunition(int ammunitions)	//задаємо кількість амуніції
	{
		this->ammunitions = ammunitions;
	}
	int GetAmmunition()		//отримуємо кількість амуніції
	{
		return ammunitions;
	}

	void Shoot()
	{
		if (ammunitions > 0)	//якщо є в наявності амуніція - проводимо вистріл
		{
			this->ammunitions--;	//ЗМЕНШУЄМО К-СТЬ АМУНІЦІЇ
			cout << "\nЗалишилось " << ammunitions << " одиниці амуніції\n" << endl;
		}
		else
		{
			cout << "\nАмуніція закінчилась!\n" << endl;
		}
	}

	virtual ~Shooter()
	{

	}

};

class Archer : virtual protected Shooter
{
public:

	void Shoot()
	{
		if (Shooter::GetAmmunition() > 0)	//якщо є в наявності амуніція
		{
			Color(14);
			cout << "Стріляє лучник" << endl;
			for (int i = 0; i < 30; i++)
			{
				cout << "-";
				Sleep(20);
			}
			cout << ">" << endl;
			Color(7);
			Shooter::GetAmmunition();	//отримуємо інформацію про наявність амуніції
			Shooter::Shoot();			//проводимо вистріл методом батьківського класу
		}
		else
		{
			cout << "Амуніція закінчилась!" << endl;
		}
	}

};

class Ranger : virtual protected Shooter
{
public:

	void Shoot()
	{
		if (Shooter::GetAmmunition() > 0)	//якщо є в наявності амуніція
		{
			Color(10);
			cout << "Стріляє рейнджер" << endl;
			for (int i = 0; i < 30; i++)
			{
				cout << "-";
				Sleep(20);
			}
			cout << ">" << endl;
			Color(7);
			Shooter::GetAmmunition();	//отримуємо інформацію про наявність амуніції
			Shooter::Shoot();			//проводимо вистріл методом батьківського класу
		}
		else
		{
			cout << "Амуніція закінчилась!" << endl;
		}
	}
};

class ArcherTower : public Archer, public Ranger
{

public:
	void Attack(int qty)
	{
		Color(12);
		cout << "Вежа отримала " << qty << " одиниць амуніції\n" << endl;
		Color(7);
		Shooter::SetAmmunition(qty);
	}
};

class Catapult : virtual protected Shooter
{
public:
	void Shoot()
	{
		
		if (Shooter::GetAmmunition() > 0)	//якщо є в наявності амуніція
		{
			Color(11);
			cout << "Рейнджер стріляє катапультою" << endl;
			for (int i = 0; i < 30; i++)
			{
				cout << "-";
				Sleep(20);
			}
			cout << "*" << endl;
			Color(7);
			Shooter::GetAmmunition();	//отримуємо інформацію про наявність амуніції
			Shooter::Shoot();		//проводимо вистріл методом батьківського класу
		}
		else
		{
			cout << "Амуніція закінчилась!" << endl;
		}
	}
};

class Fortress : public ArcherTower, public Catapult
{
public:
	Fortress()
	{

	}
	~Fortress()
	{

	}
};
