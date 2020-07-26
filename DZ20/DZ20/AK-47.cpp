#include "Header1.h"

void main()
{
	srand(time(0));

	Bullet bul[30];	//створюємо масив патронів
	Store st(30);	//створюємо магазин місткістю 30 патронів
	for (auto el : bul)
	{
		st.Arm(el);	//заряджаємо в магазин 30 патронів
	}
	Color(10);
	cout << "The Store is armed!" << endl;	//кажемо, що магазин заряджений
	cout << "Now is time to shooting!" << endl;
	Color(7);
	
	
	Automat a;		//створюємо автомат
	a.Receive();	//приймаємо магазин
	_getch();
	a.AutoShoot(st);//стріляємо
	
	
}