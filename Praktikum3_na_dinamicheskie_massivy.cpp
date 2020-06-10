/* 1. Написать функцию перевода градуса в радианы. (1 градус это 0,0174533 рад.)
2. Создать динамический двумерный массив 3х3 и заполнить её значением cos^2(x), где x = {10, 20, ... 80, 90} 
3. Написать функцию сложения двух массивов. 
4. Показать на деле основное тригонометрическое тождество: sin2(x) + cos2(x) = 1.
*/

#include <iostream>
#include <ctime>
using namespace std;
float fun(float gradus) {
	float pi = 3.14159265359;
	gradus = (gradus*pi) / 180;
	return gradus;
}

void din1(int **a) {
	srand(time(0));
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			a[i][j] = rand() % 80 + 10;
		}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}



void din1cos(int **a) {
	float c;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c = pow(cos(a[i][j] * 3.14 / 180), 2.0);
			cout << c << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void din2(int **b) {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			b[i][j] = rand() % 9 + 1;
		}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void sum(int **a, int **b) {
	int s[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			s[i][j] = a[i][j] + b[i][j];	
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
 }

void din2sin(int **b) {
	float d;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			d = pow(sin(b[i][j] * 3.14 / 180), 2.0);
				cout << d << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void toz(int **a, int **b) {
	float t;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			t = pow(sin(a[i][j] * 3.14 / 180), 2.0) + pow(cos(a[i][j] * 3.14 / 180), 2.0);
			cout << t << " ";
		}
		cout << endl;
	}
	cout << endl;
}

	


int main() {
	setlocale(LC_ALL, "rus");
	float gradus, radian;
	cout << "1) Введите градус: ";
	cin >> gradus;
	radian = fun(gradus);
	cout << "Градус в радианах: " << radian << endl;

	cout << "Первый двумерный динамический массив: "<<endl;
	int**a = new int*[3];
	for (int i = 0; i < 3; i++)
		a[i] = new int[3];
	din1(a);	
	cout << "Второй двумерный динамический массив: " << endl;
	int**b = new int*[3];
	for (int i = 0; i < 3; i++)
		b[i] = new int[3];
	din2(b);

	cout << "Первый двумерный динамический массив cos^2(x): " << endl;
	din1cos(a);
	cout << "2) Второй двумерный динамический массив в sin^2(x):  " << endl;
	din2sin(b);


	cout << "3) Сложение двух массивов: " << endl;
	sum(a,b);

	cout << "4) Основное тригонометрическое тождество: " << endl;
	toz(a, b);

	for (int i = 0; i < 3; i++) {
		delete[]a[i];
	}
	delete[]a;

	system("pause");
}
