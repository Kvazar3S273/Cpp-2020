#include "Fortress.h"

void main()
{
	Ukr();

	Fortress f;		//��������� ��"���
	int n;
	cout << "������ ������� �������, ��� ��������� � ����" << endl;
	cin >> n;
	f.Attack(n);	//�������� � ���� �������
	
	//��������

	f.ArcherTower::Archer::Shoot();
	f.ArcherTower::Archer::Shoot();
	f.ArcherTower::Archer::Shoot();
	f.ArcherTower::Ranger::Shoot();
	f.ArcherTower::Ranger::Shoot();
	f.Catapult::Shoot();
}