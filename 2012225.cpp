#include <iostream>
#include <string>

using namespace std;

string vacio[3];									//string que guarda solo los datos que van en cout << "Favor de presionar enter 2 veces.." //
string nombres[3];
string caracteristicas[3];
string genero[3];
int id = 1;
int op;
bool a = true;

void agregar();
void mostrar();
void limpiar();

void main() {
	
	system("color 79");
	
	while (a) {
	
		cout << "Menu" << endl;
		cout << "1.Agregar" << endl;
		cout << "2.Mostrar" << endl;
		cout << "3.Limpiar" << endl;
		cout << "4.Salir" << endl;
		cin >> op;

		switch (op)
		{
		case 1:
			void agregar();
			{
				system("cls");
				for (int i = 0; i < 3; i++)
				{
					cout << "Favor de presionar enter 2 veces.. " << i + 1 << ": ";			//error de programa hace que en la consola aparezca la misma frase dos veces seguidas, solo con la primer serie de comandos//	
					getline(cin, vacio[i]);
				}
				for (int i = 0; i < 3; i++)
				{
					cout << id + i << ": " << vacio[i] << endl;
				}
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
				system("cls");
			}
			break;

		case 2:

			void mostrar();
			{
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
			}

			break;

		case 3:

			void limpiar();
			{
				system("cls");
			}
			
			break;

		default:
			a = false;
			break;
		}
	}
}
//Codigos de prueba//
//void agregar() {
//
//	for (int i = 0; i < 3; i++)
//	{
//		getline(cin, nombres[i]);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		cout << id + i << ": " << nombres[i] << endl;
//	}
//	system("pause");
//}
////
//void mostrar() {
//
//	cout << "Lista de juegos. " << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << id + i << ": " << nombres[i] << endl;
//	}
//}
//
//void limpiar() {
//
//	system("cls");
//
//}