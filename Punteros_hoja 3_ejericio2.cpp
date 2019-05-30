#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;
void Generar_numeros(int *w, int *x, int *y, int *z) {//PARAMETROS VALOR
	//PARAMETRO REFERENCIA PUNTERO

	srand(time(NULL));
	*w = 1 + rand() % (40);
	*x = 1 + rand() % (40);
	*y = 1 + rand() % (40);
	*z = 1 + rand() % (40);

	cout << "El numero magico n1: " << *w << endl;
	cout << "El numero magico n2: " << *x << endl;
	cout << "El numero magico n3: " << *y << endl;
	cout << "El numero magico n4: " << *z << endl;

}
void Hallar_mayor(int *w, int *x, int *y, int *z) {


	if (*w > *x && *w > *y && *w > *z)

		cout << "El mayor es: " << *w << endl;
	if (*x > *w && *x > *y && *x > *z)

		cout << "El mayor es: " << *x << endl;

	if (*y > *w && *y > *x && *y > *z)

		cout << "El mayor es: " << *y << endl;
	if (*z > *w && *z > *x &&  *z > *y)

		cout << "El mayor es: " << *z << endl;



}
void Hallar_menor(int *w, int *x, int *y, int *z) {




	if (*w < *x && *w < *y && *w < *z)

		cout << "Es el menor: " << w << endl;
	if (*x < *w && *x < *y && *x < *z)

		cout << "Es el menor: " << *x << endl;

	if (*y < *w && *y < *x && *y < *z)

		cout << "Es el menor: " << *y << endl;
	if (*z < *w && *z < *x && *z < *y)

		cout << "Es el menor: " << *z << endl;


}

void Graficar(int *w, int *x, int *y, int *z) {



	for (int i = 1; i <= 5; i++) {

		cout << endl;

	}
	for (int k = 1; k <= 40 - *w; k++) {

		cout << " ";
	}

	cout << *w;

	for (int k = 1; k <= *w; k++) {
		cout << "*";
	}

	cout << endl;
	for (int j = 1; j <= 40 - *x; j++) {

		cout << " ";
	}
	cout << *x;

	for (int m = 1; m <= *x; m++) {
		cout << "*";
	}
	cout << endl;
	for (int m = 1; m <= 40 - *y; m++) {

		cout << " ";
	}
	cout << *y;

	for (int o = 1; o <= *y; o++) {
		cout << "*";
	}
	cout << endl;

	for (int m = 1; m <= 40 - *z; m++) {

		cout << " ";
	}
	cout << *z;
	for (int o = 1; o <= *z; o++) {
		cout << "*";
	}
	cout << endl;
}


int main() {
	int a, b, c, d;

	srand(time(NULL));

	a = 1 + rand() % (40);
	b = 1 + rand() % (40);
	c = 1 + rand() % (40);
	d = 1 + rand() % (40);

	int *a1, *b1, *c1, *d1;

	a1 = &a;
	b1 = &b;
	c1 = &c;
	d1 = &d;

	cout << "El numero magico n1: " << *a1 << endl;
	cout << "El numero magico n2: " << *b1 << endl;
	cout << "El numero magico n3: " << *c1 << endl;
	cout << "El numero magico n4: " << *d1 << endl;


	Hallar_mayor(a1 , b1 , c1 , d1);
	Hallar_menor(a1, b1, c1, d1);
	Graficar(a1, b1, c1, d1);



	_getch();
	return 0;
}