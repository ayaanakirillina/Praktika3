/* 4.���� ����������� ����� n.�������� ����� YES, ���� ����� n �������� ������ �������� ������, ��� ����� NO � ��������� ������. 
��������� ���������� � ������� ������������ ������!*/

#include<iostream>

using namespace std;

void dvoika(int a)
{
	if (a == 1)
		cout << "YES" << endl;
	if (a == 1 || a % 2 != 0)
	{
		cout << "NO" << endl;
	}
	else if (a == 2 && a % 2 == 0)
	{
		cout << "YES" << endl;
	}
	else return dvoika(a / 2);
}
void main()
{
	int n;
	cout << "Vvedite chislo: "; cin >> n;
	dvoika(n);

	system("pause");
}