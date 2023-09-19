
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	//float a1, a2, a3, sum = 3;
	//cout << "Введите 3 оценки: \n";
	//cin >> a1;
	//cin >> a2;
	//cin >> a3;
	//cout << round((a1 + a2 + a3) / sum);

	/*int a1;
	cout << "Введите число \n";
	cin >> a1;
	a1 = (a1 % 10) * 100 + (a1 / 10 )+ a1/100 ;
	cout << a1;*/

	//short a1, a2, a3, a4;
	//cout << "Введите четыре оценки: ";
	//cin >> a1 >> a2 >> a3 >> a4;
	//short result = round(float(a1 + a2 + a3 + a4) / 4);
	//	if (result == 5) cout << "Отличник";
	//	else if (result == 4) cout << "Хорошист";
	//	else if (result == 3) cout << "Троечник";
	//	else cout << "Двоечник";

	int a, b;
	char c;
	cout << "Введите два числа и тип операции""\n";
	cin >> a >> b >> c;
	if (c == '+') {
		cout << a << "+" << b << "=" << a + b << "\n";
	}
	else if (c == '-') {
		cout << a << "-" << b << "=" << a - b << "\n";
	}
	else if (c == '*') {
		cout << a << "*" << b << "=" << a * b << "\n";
	}
	else if (c == '/') {
		if (b == 0)
			cout << "division by zero";
		else
			cout << a << "/" << b << "=" << a / b;
	}
}
