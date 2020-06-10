//2. Напишите рекурсивную функцию, которая находит определитель матрицы.

#include <iostream>

using namespace std;

void qwe(int** mas, int** p, int i, int j, int m) {
	int ki, kj, di, dj;
	di = 0;
	for (ki = 0; ki < m - 1; ki++)
	{
		if (ki == i) di = 1;
		dj = 0;
		for (kj = 0; kj < m - 1; kj++)
		{
			if (kj == j) dj = 1;
			p[ki][kj] = mas[ki + di][kj + dj];
		}
	}
}
int asd(int** mas, int m) {
	int i, j, d, k, n;
	int** p;
	p = new int*[m];
	for (i = 0; i < m; i++)
		p[i] = new int[m];
	j = 0; d = 0;
	k = 1;
	n = m - 1;
	if (m < 1) cout << "невозможно";
	if (m == 1)
	{
		d = mas[0][0];
		return(d);
	}
	if (m == 2)
	{
		d = mas[0][0] * mas[1][1] - (mas[1][0] * mas[0][1]);
		return(d);
	}
	if (m > 2)
	{
		for (i = 0; i < m; i++)
		{
			qwe(mas, p, i, 0, m);
			d = d + k * mas[i][0] * asd(p, n);
			k = -k;
		}
	}
	return(d);
}
int main()
{
	int m, i, j, d;
	int** mas;
	setlocale(LC_ALL, "");
	cout << "Введите размер матрицы m=";
	cin >> m;
	mas = new int*[m];
	for (i = 0; i < m; i++)
	{
		mas[i] = new int[m];
		for (j = 0; j < m; j++)
		{
			cin >> mas[i][j];
		}
	}
	d = asd(mas, m);
	cout << "Определитель матрицы равен " << d;
	cout << endl;

	system("pause");
	return 0;
}
