#include <iostream>
using namespace std;

int factorial (int num, int fact){
	for (int i=1; i <=num; i++){
		fact = fact * i;
	}
	return fact;
}

int calcular_e(int numero){
	int e=1;
	int fact;
	for (int num=1; num < numero; num++){
		e = e +(1/factorial(num, fact));
	}
	return e;
}

int main (){
	int numero;
	cout << "Dime los numeros que quieres calcular" << endl;
	cin >> numero;
	cout << "El valor de e es " << calcular_e(numero) << endl;
	return 0;
}