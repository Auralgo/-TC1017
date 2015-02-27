#include <iostream>
using namespace std;

int main () {
	
	int a, b;

	cout << "Este programa realiza operaciones básicas con dos números dados" << endl;
	cout << "Dame el primer número" << endl;
	cin >> a;
	cout << "Dame el segundo número" << endl;
	cin >> b;

	cout << "La suma de los números es " << a + b << endl;
	cout << "La diferencia entre los números es " << a - b << endl;
	cout << "El producto de los números es " << a * b << endl;
	cout << "El cociente de ambos números es " << a / b << endl;

	return 0;
}