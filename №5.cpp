/* 5. Дробь называется правильной, если ее числитель меньше знаменателя,
и несократимой, если числитель и знаменатель являются взаимно простыми.
Требуется написать программу, которая будет находить наибольшую правильную несократимую дробь,
у которой сумма числителя и знаменателя равна N.

Пример:
Вход: 10 Выход : 3 7 */


#include<iostream>

using namespace std;

int nod(int a, int b)
{
	if (a < b)
	{
		int c = a;
		a = b;
		b = c;
	}
	if (b == 0)	return a;
	else return nod(b, a % b);
}
void somefunction(int n)
{
	int s = n / 2;
	if (n % 2 == 0)
		s -= 1;
	while (s > 0)
	{
		if (nod(s, n - s) == 1)
		{
			cout << s << " " << n - s << endl;
			break;
		}
		s -= 1;
	}
}
//Ответ: сначала числитель потом знаменатель
void main()
{
	int n;
	cin >> n;
	somefunction(n);

	system("pause");
}