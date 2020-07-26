#pragma once
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>

using namespace std;

void Color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
//---
class Bullet	//���� ���� (����, ������)
{
private:
	int num;	//���������� ����� �����
	int hit = 70;	//��������� ��������� � ���� (%)
public:
	void Shooting(int& num)
	{
		cout << "\nBullet " << num << " has shooted - BANG!!!" << endl;
		num++;
	}
	bool IsHit()
	{
		int temp;
		temp = rand() % 10;
		if (temp > 0 && temp < hit / 10) //���� ������ ������ � ������� ��������� ���������
			return 1;
		else //� ������ ������� ������
			return 0;
	}

};

class Store
{
	struct Node
	{
		Bullet patron;
		Node* next;
	};
	Node* phead;
	int size;

public:
	Store(int size)
	{
		phead = nullptr;
		this->size = size;
	}

	void Arm(Bullet p)	//���������� �������
	{
		Node* pnew = new Node();
		pnew->patron = p;

		if (phead == nullptr)
			pnew->next = nullptr;
		else
			pnew->next = phead;
		phead = pnew;
		size++;
	}

	Bullet Emit()	//������ �������
	{
		if (phead == nullptr)
		{
			cout << "stack is empty\n";
		}
		Bullet current = phead->patron;
		Node* pdel = phead;
		phead = phead->next;
		delete pdel;
		size--;
		return current;
	}

};

class Automat
{
public:
	void Receive()	//�������� �������
	{
		cout << "\nStore received!\nLet's pull the trigger!!!" << endl;
	}
	Bullet bul[30];
	
	int n = rand() % 100;	//���������� ����� �������

	void TakeOneBullet(Bullet bul)	//��������� �������
	{
		bul.Shooting(n);
	}
	void AutoShoot(Store st)
	{
		int countYes = 0;	//��������� ���������
		int countNo = 0;	//� ��������
		for (int i = 0; i < 30; i++)
		{
			TakeOneBullet(bul[i]);	//�������� ���� ������ ��� �������
			st.Emit();				//������� ���� ������
			cout << "\a";			//������ ���� �������
			if (bul[i].IsHit())		//�������� �� ���������
			{
				Color(12);
				cout << "Shot at target!!!" << endl;
				Color(7);
				countYes++;
			}
			else
			{
				Color(11);
				cout << "Oops! Shot past the target..." << endl;
				Color(7);
				countNo++;
			}
			Sleep(300);
		}
		
		cout << "\n\nThere was " << countYes << " accurate shots\n";
		cout << "and " << countNo << " inaccurate shots\n\n";

	}
};