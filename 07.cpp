#include <iostream>
using namespace std;

int main()
{
	int suma=0;
	int a, b;

	cout<<"Dame el primer número"<<endl;
	cin>> a;
	cout<<"Dame el segundo número"<<endl;
	cin>> b;

	int num = a;
	while ( num <= b ) 
	{	
		suma = suma + num;
		num = num + 1;
	}
	
	cout<<"La suma es "<< suma <<endl;

return 0;
}