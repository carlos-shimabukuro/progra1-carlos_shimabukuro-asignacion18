#include <iostream>

using namespace std;

void main() {
	int mayor = 0, cc = 0, cc2 = 0, cc3 = 0;
	float promedio = 0;
	float *peso = new float (10);
	for (int i = 0; i < 10; i++)
	{
		cin >> peso[i];
		if (peso[i] > mayor) mayor = peso[i];
	}
	for (int i = 0; i < 10; i++)
	{
		promedio += peso[i];
	}
	promedio = promedio / 10;

	for (int  i = 0; i < 10; i++)
	{
		if (peso[i] < 53)
		{
			cc++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (53 <= peso[i] && peso[i] <= 60)
		{
			cc2++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (peso[i] > 60)
		{
			cc3++;
		}
	}

	cout << "El peso promedio es = " << promedio << endl;
	cout << "El peso de la persona que pesa mas = " << mayor << endl;
	cout << "El numero de personas cuya contextura es delgada = " << cc << endl;
	cout << "El numero de personas cuya contextura es mediana = " << cc2 << endl;
	cout << "El numero de personas cuya contextura es gruesa = " << cc3 << endl;
	system("pause");
}