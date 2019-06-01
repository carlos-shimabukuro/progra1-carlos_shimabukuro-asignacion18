#include <iostream>

using namespace std;

int main() {
	int *nota = new int[6];
	int menor = 20, promedio = 0;

	cout << " --- Ingrese notas --- " << endl;
	for (int i = 1; i <= 6; i++)
	{
		cin >> nota[i];
	}
	for (int i = 1; i <= 6; i++)
	{
		if (nota[i] < menor)
		{
			menor = nota[i];
		}
		promedio += nota[i];
	}

	cout << "La nota que no se considera en el promedio seria : " << menor << endl;
	cout << "El promedio es : " << (promedio - menor) / 5 << endl;

	cout << endl; system("pause"); return 0;
}



	