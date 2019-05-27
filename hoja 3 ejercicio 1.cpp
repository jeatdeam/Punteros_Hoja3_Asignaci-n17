#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int Factorial(int n) {

	int factorial=1;

	for (int i = 1; i <= n; i++) {

		factorial = factorial * i;
	}

	return factorial;
}


float SenoX(int n, int m) {

	float senox=0;

	for (int i = 0; i <= n; i++) {

		senox = senox + (pow(-1, i)*pow(m, 2 * i + 1)) / Factorial(m);
	}
	

	return senox;
}
void Digit(int n, string m) {
	float digit=0;

	cout << (m).length() << endl;
	cout << (m).length() - n << endl;
	cout << (m).substr(((m).length() - n), 1);

	n = stoi((m).substr(((m).length() - n), 1));
	cout << "El n-esimo digito es: " << n << endl;

		
}


int main() {
	int a, b, c;
	do {
		cout << "Menu de opciones" << endl;
		cout << "1.Calcular el seno: " << endl;
		cout << "2.Hallar el enesimo digito: " << endl;
		cout << "3.Fin: " << endl;
		cin >> a;
	} while ((a < 1) || (a > 3));

	switch (a) {
	case 1:
		cout << "ingrese la cantidad de terminos: "; cin >> b;
		cout <<  "ingrese el valor de N: "; cin >> c;
		cout << "El seno es: " << SenoX(b, c);
		break;

	case 2:
		Digit(n, m);


	case 3:

		cout << "presione una tecla para continuar... " << endl;
		break;

	}


	









	_getch();
	return 0;
}