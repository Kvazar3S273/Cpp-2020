#pragma once
#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

void Ukr()	//�������� �������, ��� ���� �������� ������ ���. ���� � ���-����
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
	int ammunitions;	//������� �������
public:
	Shooter()
	{
		ammunitions = 0;
	}

	Shooter(int ammunitions)	
	{
		this->ammunitions = ammunitions;
	}

	void SetAmmunition(int ammunitions)	//������ ������� �������
	{
		this->ammunitions = ammunitions;
	}
	int GetAmmunition()		//�������� ������� �������
	{
		return ammunitions;
	}

	void Shoot()
	{
		if (ammunitions > 0)	//���� � � �������� ������� - ��������� ������
		{
			this->ammunitions--;	//�����Ӫ�� �-��� ���Ͳֲ�
			cout << "\n���������� " << ammunitions << " ������� �������\n" << endl;
		}
		else
		{
			cout << "\n������� ����������!\n" << endl;
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
		if (Shooter::GetAmmunition() > 0)	//���� � � �������� �������
		{
			Color(14);
			cout << "������ ������" << endl;
			for (int i = 0; i < 30; i++)
			{
				cout << "-";
				Sleep(20);
			}
			cout << ">" << endl;
			Color(7);
			Shooter::GetAmmunition();	//�������� ���������� ��� �������� �������
			Shooter::Shoot();			//��������� ������ ������� ������������ �����
		}
		else
		{
			cout << "������� ����������!" << endl;
		}
	}

};

class Ranger : virtual protected Shooter
{
public:

	void Shoot()
	{
		if (Shooter::GetAmmunition() > 0)	//���� � � �������� �������
		{
			Color(10);
			cout << "������ ��������" << endl;
			for (int i = 0; i < 30; i++)
			{
				cout << "-";
				Sleep(20);
			}
			cout << ">" << endl;
			Color(7);
			Shooter::GetAmmunition();	//�������� ���������� ��� �������� �������
			Shooter::Shoot();			//��������� ������ ������� ������������ �����
		}
		else
		{
			cout << "������� ����������!" << endl;
		}
	}
};

class ArcherTower : public Archer, public Ranger
{

public:
	void Attack(int qty)
	{
		Color(12);
		cout << "���� �������� " << qty << " ������� �������\n" << endl;
		Color(7);
		Shooter::SetAmmunition(qty);
	}
};

class Catapult : virtual protected Shooter
{
public:
	void Shoot()
	{
		
		if (Shooter::GetAmmunition() > 0)	//���� � � �������� �������
		{
			Color(11);
			cout << "�������� ������ �����������" << endl;
			for (int i = 0; i < 30; i++)
			{
				cout << "-";
				Sleep(20);
			}
			cout << "*" << endl;
			Color(7);
			Shooter::GetAmmunition();	//�������� ���������� ��� �������� �������
			Shooter::Shoot();		//��������� ������ ������� ������������ �����
		}
		else
		{
			cout << "������� ����������!" << endl;
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
