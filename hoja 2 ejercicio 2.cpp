#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int SumaComplejos(int a, int b) {
	int sumacomplejos;

	sumacomplejos = a + b;

	return sumacomplejos;
}


int RestaComplejos(int a, int b) {
	int restacomplejos;

	restacomplejos = a - b;

	return restacomplejos;
}

int main() {
	char a;
	int w, x, y, z,solucion;
	
	cout << "\t\t\tMENU" <<endl;
	cout << "\t\t\t====" << endl;
	cout << "\t\tA. Sumar 2 Numeros Complejos. " << endl;
	cout << "\t\tB. Restar 2 Numeros Complejos. " << endl;
	cout << "\t\tX. Salir del Programa. " << endl;

		do {
			cout << "\t\tSeleccione una opción: " << endl;
			cin >> a;
		} while (a != 'A'&& a!='B' && a!= 'X') ;
	

	switch (a) {

	case 'A':



		cout << "Numero 1  " << endl;
		cout << "Parte Real: ";
		cin >> w;
		cout << "Parte Imaginaria: ";
		cin >> x;
		cout << "Numero 2  " << endl;
		cout << "Parte Real: ";
		cin >> y;
		cout << "Parte Imaginaria: ";
		cin >> z;
		
		
		cout << "(" << w << "+" << x << "i" << ")" << " + " << "(" << y << "+" << z << "i" << ")" << " = " << "(" << SumaComplejos(w,y) <<" + "<<SumaComplejos(x,z)<<"i"<< ")" << endl;
		cout << "Presione una tecla para continuar..." << endl;
		break;
		

	case 'B':

		cout << "Numero 1  " << endl;
		cout << "Parte Real: ";
		cin >> w;
		cout << "Parte Imaginaria: ";
		cin >> x;
		cout << "Numero 2  " << endl;
		cout << "Parte Real: ";
		cin >> y;
		cout << "Parte Imaginaria: ";
		cin >> z;


		cout << "(" << w << "+" << x << "i" << ")" <<" - "<< "(" << y << "+" << z << "i" << ")" << " = " << "(" << RestaComplejos(w, y) << " - " << RestaComplejos(x, z) << "i" << ")" << endl;
		cout << "Presione una tecla para continuar..." << endl;
		break;

	case 'X':


		cout << "Presione una tecla para continuar..." << endl;
		break;



		
		
	}



	_getch();
	return 0;
}
