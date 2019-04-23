#include<iostream>
using namespace std;
int main() {
	int n, a = 2, suma = 2;
	cout << "Ingrese el valor de n: " << endl;
	cin >> n;
	if (n>0)
	{
		while (a<=n)
		{
			suma = suma + 2 * a;
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