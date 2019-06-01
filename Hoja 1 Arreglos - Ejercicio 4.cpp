#include <iostream>

using namespace std;

int main() {
	int n, menor = 20, mayor = 0;
	float promedio = 0;
	int *notas;


	cout << "Ingrese el numero de personas : "; cin >> n;
	notas = new int[n];
	cout << " --- Notas de la ultima practica --- " << endl;

	for (int i = 1; i <= n; i++)
	{
		cin >> notas[i];
	}
	for (int i = 1; i <= n; i++)
	{
		promedio = promedio + notas[i];

		if (notas[i] < menor)
		{
			menor = notas[i];
		} 
		if (notas[i] > mayor)
		{
			mayor = notas[i];
		}
	}

	
	cout << "El promedio de notas es : " << promedio / n << endl;
	cout << "La menor nota es : " << menor << endl;
	cout << "La mayor nota es : " << mayor << endl;

	cout << endl; system("pause"); return 0;
}