#include "Fortress.h"

void main()
{
	Ukr();

	Fortress f;		//створюємо об"єкт
	int n;
	cout << "Введіть кількість амуніції, яку доставити у вежу" << endl;
	cin >> n;
	f.Attack(n);	//передаємо в вежу амуніцію
	
	//стріляємо

	f.ArcherTower::Archer::Shoot();
	f.ArcherTower::Archer::Shoot();
	f.ArcherTower::Archer::Shoot();
	f.ArcherTower::Ranger::Shoot();
	f.ArcherTower::Ranger::Shoot();
	f.Catapult::Shoot();
}