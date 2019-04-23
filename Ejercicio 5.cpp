#include<iostream>
using namespace std;
int main() {
	double a, n, c = 1;
	double suma = 0;
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << "Ingrese el valor de n: " << endl;
	cin >> n;
	if (a>0&&n>0)
	{
		while (c<=n)
		{
			suma = suma + (1 / a);
			c++;
		}
		cout << "La suma es: " <<suma<< endl;
	}
	else
	{
		cout << "Ingrese nuevamente los valores" << endl;
	}



	system("pause");
}