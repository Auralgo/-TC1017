#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(int x){
	int num = x;
	int fact = 1;
	while ( num >= 1 ){	
		fact = fact * num;
		num = num - 1;
	}
	return fact;
}

int main()
{
	int a;
	char respuesta;

	do{
		cout << "Introduce el número del que quieres sacar el factorial" << endl;
		cin >> a;

		int f = factorial(a);
		cout << "El factorial es " << f << endl;
		cout << "¿Te gustaría intentar otro número? s/n" << endl;
		cin >> respuesta;
	} while (respuesta == 's');

	cout << "¡Ten un buen día!" << endl;

return 0;
}