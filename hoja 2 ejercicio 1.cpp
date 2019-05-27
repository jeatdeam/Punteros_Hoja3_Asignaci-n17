#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int Factorial(int a) {

	int factorial = 1;

	for (int i = 1; i <= a; i++) {

		factorial = factorial * i;

	}

	return factorial;
}
float Exponencial(float b, float c) {

	float exponencial = 1 + b;

	for (int i = 2; i <= c; i++) {

		exponencial = exponencial + (pow(b, i) / Factorial(i));

	}


	return exponencial;
}

void Rombo(int b) {

	for (int i = 1; i <= 10; i++) {

		cout << endl;
	}
	int n = 1;
	for (int i = 1; i != 0; i = i + n) {

		if (i == b) {
			n = -n;
		}
		for (int k = 1; k <= 10 - i; k++) {
			cout << " ";
		}
		for (int l = 1; l <= i * 2 - 1; l++) {

			cout << l;
		}

		cout << endl;
	}
}


int main() {

	int a, b;

	do {

		cout << "1)Determinar el factorial de un número: " << endl;
		cout << "2)Calcular el valor de e^a: " << endl;
		cout << "3)Imprimir rombo: " << endl;
		cout << "4)Fin: " << endl;
		cin >> a;
	} while (a != 3 && a != 2 && a != 1 && a != 4);

	switch (a) {
	case 1:

		cout << "ingrese el numero: " << endl;
		cin >> b;
		cout << "el factorial del numero es: " << Factorial(b);

		break;
	case 2:
		int c;
		cout << "ingrese el valor de a-k: " << endl;
		cin >> b >> c;
		cout << "el valor del e^a es: " << Exponencial(b, c) << endl;
		break;
	case 3:
		do {
			cout << "ingrese el numero: " << endl;
			cin >> b;
		} while (b > 10);
		Rombo(b);
		break;


	case 4:

		break;
	}

	_getch();
	return 0;
}
