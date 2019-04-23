#include <iostream>
using namespace std;
int main() {
	int n;
	double a,suma = 0, b = 1, c = 1;
	 
	
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << "Ingrese el valor de n: " << endl;
	cin >> n;
	if (a>0&&n>0)
	{
		while (c<=n)
		{
			suma = suma + (1 / (a * b));
			b = 3 * c;
			c++;
		}
		cout << "La suma es: " << suma << endl;
	}
	else
	{
		cout << "Ingrese nuevamente los valores" << endl;
	}

	system("pause");
}