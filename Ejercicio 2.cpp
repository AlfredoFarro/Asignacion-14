#include<iostream>
using namespace std;
int main() {
	int n, a = 1, suma = 0;
	cout << "Ingrese el valor de n: " << endl;
	cin >> n;
	if (n>0)
	{
		while (a<=n)
		{
			suma = suma + a * a;
			a++;
		}
		cout << "La suma es: " << suma << endl;
	}
	else
	{
		cout << "Ingrese nuevamente el valor de n" << endl;
	}

	system("pause");
}