#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;
void Generar_numeros(int w, int x, int y,int z) {

	srand(time(NULL));
	w = 1 + rand() % (40);
	x = 1 + rand() % (40);
	y = 1 + rand() % (40);
	z = 1 + rand() % (40);

	cout << "El numero magico n1: " << w << endl;
	cout << "El numero magico n2: " << x << endl;
	cout << "El numero magico n3: " << y << endl;
	cout << "El numero magico n4: " << z << endl;

}
void Hallar_mayor(int w, int x, int y, int z) {

	
	if (w > x && w > y && w > z)

		cout << "El mayor es: " << w <<endl;
	if (x > w && x > y && x > z)

		cout << "El mayor es: " << x << endl;

	if (y > w && y > x && y > z)

		cout << "El mayor es: " << y << endl;
	if (z > w && z > x && z > y)

		cout << "El mayor es: " << z << endl;



}
void Hallar_menor(int w, int x, int y, int z) {

	


	if (w < x && w < y && w < z)

		cout << "Es el menor: " << w << endl;
	if (x < w && x < y && x < z)

		cout << "Es el menor: " << x << endl;

	if (y < w && y < x && y < z)

		cout << "Es el menor: " << y << endl;
	if (z < w && z < x && z < y)

		cout << "Es el menor: " << z << endl;


}

void Graficar(int w, int x, int y, int z) {



	for (int i = 1; i <= 5; i++) {

		cout << endl;

	}
	for (int k = 1; k <= 40 - w; k++) {

		cout << " ";
	}

	cout << w;

	for (int k = 1; k <= w; k++) {
		cout << "*";
	}

	cout << endl;
	for (int j = 1; j <= 40 - x; j++) {

		cout << " ";
	}
	cout << x;

	for (int m = 1; m <= x; m++) {
		cout << "*";
	}
	cout << endl;
	for (int m = 1; m <= 40 - y; m++) {

		cout << " ";
	}
	cout << y;

	for (int o = 1; o <= y; o++) {
		cout << "*";
	}
	cout << endl;

	for (int m = 1; m <= 40 - z; m++) {

		cout << " ";
	}
	cout << z;
	for (int o = 1; o <= z; o++) {
		cout << "*";
	}
	cout << endl;
}


int main() {
	int w, x, y, z;

	srand(time(NULL));

	w = 1 + rand() % (40);
	x = 1 + rand() % (40);
	y = 1 + rand() % (40);
	z = 1 + rand() % (40);

	cout << "El numero magico n1: " << w << endl;
	cout << "El numero magico n2: " << x << endl;
	cout << "El numero magico n3: " << y << endl;
	cout << "El numero magico n4: " << z << endl;


	Hallar_mayor(w,x,y,z);
	Hallar_menor(w, x, y, z);
	Graficar(w, x, y, z);



	_getch();
	return 0;
}
