#include <iostream>

using namespace std;

int suma(int n) {
	int suma = 0;
	while (n > 0)
	{
		suma = suma + (n % 10);
		n = n / 10;
	}

	return suma;
}

int main() {
	int *numero = new int [3];
	int cc;

	cout << " --- Ingerse Numeros --- " << endl;
	for (int i = 1; i <= 3; i++)
	{
		cin >> numero[i];
	}

	for (int i = 1; i <= 3; i++)
	{
		if (suma(numero[i]) % 3 == 0)
		{
			cc++;
		}
	}
	cout << "Numero divisibles entre 3 : " << cc++ << endl;

	cout << endl; system("pause"); return 0;
}