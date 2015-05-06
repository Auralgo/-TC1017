#include <iostream>
#include <cstdlib>
using namespace std;

float babilonia(float n){
	float a;
	float resp;
	for (resp=(n/2.0); a!=resp;){
		cout << resp << endl;
		a = resp;
		resp= (resp + (n/resp))/2.0;
	}
	return resp;
}

int main(){
	float number;
	cout <<"Este programa calcula la raiz cuadrada de acuerdo al metodo de babilonia" <<endl;
	cout << "Porfavor, ingrese el numero que deseas calcular la raiz cuadrada" << endl;
	cin >> number;
	cout << "La raiz de " << number << " es " << babilonia(number) << endl;
	return 0;
}