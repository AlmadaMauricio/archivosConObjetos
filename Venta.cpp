#include <iostream>
#include "Venta.h"
using namespace std;

Venta::Venta()
{
	_codigo = 0;
	_cantidad = 0;
	_precio = 0;
}

int Venta::getCodigo()
{
	return _codigo;
}

int Venta::getCantidad()
{
	return _cantidad;
}

float Venta::getPrecio()
{
	return _precio;
}

float Venta::getTotal()
{
	return _precio * _cantidad;
}

void Venta::cargar()
{
	cout << "---CARGAR VENTAS---" << endl;
	cout << "Codigo: ";
	cin >> _codigo;
	cout << "Precio: ";
	cin >> _precio;
	cout << "Cantidad: ";
	cin >> _cantidad;
	cout << endl;
}

void Venta::mostrar()
{
	cout << "Codigo: " << _codigo << endl;
	cout << "Precio: " << _precio << endl;
	cout << "Cantidad: " << _cantidad << endl;
	cout << "Total: " << _precio * _cantidad << endl;
	cout << endl;
}
