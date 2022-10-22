#include <iostream>
#include <string>

using namespace std;

string nombres[3];
string caracteristicas[3];
string genero[3];
string anio[3];
string precio[3];
int id = 1;
int op;
bool a = true;

void main() {
	
	while (a) {
	
		cout << "Menu" << endl;
		cout << "1.Agregar juegos" << endl;
		cout << "2.Mostrar juegos" << endl;
		cout << "3.Limpiar pantalla" << endl;
		cout << "4.Salir del programa" << endl;
		cin >> op;
		cin.ignore();

		switch (op)
		{
		case 1:
			system("cls");
			for (int i = 0; i < 3; i++)
			{
				cout << "Ingresa nombres. " << i + 1 << ": ";
				getline(cin, nombres[i]);
			}
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << nombres[i] << endl;
			}
			for (int i = 0; i < 3; i++)
			{
				cout << "Ingresa caracteristicas. " << i + 1 << ": ";
				getline(cin, caracteristicas[i]);
			}
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << caracteristicas[i] << endl;
			}
			for (int i = 0; i < 3; i++)
			{
				cout << "Ingresa genero. " << i + 1 << ": ";
				getline(cin, genero[i]);
			}
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << genero[i] << endl;
			}
			for (int i = 0; i < 3; i++)
			{
				cout << "Ingresa anio. " << i + 1 << ": ";
				getline(cin, anio[i]);
			}
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << anio[i] << endl;
			}
			for (int i = 0; i < 3; i++)
			{
				cout << "Ingresa precio. " << i + 1 << ": ";
				getline(cin, precio[i]);
			}
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << precio[i] << endl;
			}
			system("cls");
			break;

		case 2:
			system("cls");
			cout << "Lista de juegos. " << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << nombres[i] << endl;
			}
			cout << "Lista de caracteristicas. " << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << caracteristicas[i] << endl;
			}
			cout << "Lista de generos. " << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << genero[i] << endl;
			}
			cout << "Lista de anios. " << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << anio[i] << endl;
			}
			cout << "Lista de precios. " << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ": " << precio[i ] << endl;
			}
			break;
		
		case 3:
			system("cls");
			break;
		
		case 4:
			a = false;
			break;

		default:
			cout << "error, intente con un numero valido" << endl;
			break;
		}
	}
}