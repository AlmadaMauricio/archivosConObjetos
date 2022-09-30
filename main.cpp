#include <iostream>
#include "Venta.h"
#include "ArchivoVenta.h"
using namespace std;
/*
	Nos piden hacer un programa que nos permita cargar ventas de un kiosko, el programa debe permitirnos cargar los siguientes datos:

	- codigo
	- precio
	- cantidad

	el programa debe permitir cargar ventas y mostrar el total recaudado.
*/
int main() {

	int opcion;
	ArchivoVenta archivoVenta;
	Venta venta;

	do
	{
		cout << "1. Cargar ventas." << endl;
		cout << "2. Mostrar total recaudado." << endl;
		cout << "---------------------------" << endl;
		cout << "0. Salir." << endl;
		cout << "---------------------------" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		system("cls");

		switch (opcion)
		{
		case 1:
			venta.cargar();
			archivoVenta.guardar(venta);
			break;
		case 2:
			cout << "Total recaudado: " << archivoVenta.totalRecaudado() << endl;
			break;
		case 0:
			cout << "Gracias por usar el programa!" << endl;
			break;
		default:
			cout << "Opcion incorrecta." << endl;
			break;
		}

	} while (opcion != 0);


	cout << endl;
	system("pause");
	return 0;
}