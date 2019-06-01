#include <iostream>

using namespace std;

int main() {
	int n, cc = 0, cc1 = 0, cc2 = 0;
	int *nota;

	do
	{
		cout << "Ingrese el numero de alumnos : "; cin >> n;
	} while (n < 1 || n > 40);
	nota = new int[n];
	
	cout << " --- Ingrese Notas --- " << endl;

	for (int i = 1; i <= n; i++)
	{
		cin >> nota[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (nota[i] == 00) { cc++; }
		if (nota[i] == 20) { cc1++; }
		if (nota[i] >= 13) { cc2++; }
	}
	cout << endl;

	cout << "La cantidad de personas que obtuvieron 00 es : " << cc << endl;
	cout << "La cantidad de personas que obtuvieron 20 es : " << cc1 << endl;
	cout << "La cantidad de personas aprobadas es : " << cc2 << endl;
	cout << "La cantidad de personas desaprobadas es : " << n - cc2 << endl;

	cout << endl; system("pause"); return 0;
}