#include "Header1.h"

void main()
{
	srand(time(0));

	Bullet bul[30];	//��������� ����� �������
	Store st(30);	//��������� ������� ������� 30 �������
	for (auto el : bul)
	{
		st.Arm(el);	//��������� � ������� 30 �������
	}
	Color(10);
	cout << "The Store is armed!" << endl;	//������, �� ������� ����������
	cout << "Now is time to shooting!" << endl;
	Color(7);
	
	
	Automat a;		//��������� �������
	a.Receive();	//�������� �������
	_getch();
	a.AutoShoot(st);//��������
	
	
}