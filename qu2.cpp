//Aurora Alvarado Gonzalez. A01630329
#include <iostream>
#include <cmath>

using namespace std;

int superpower(int a, int b){
	int power = pow(a,b);
	return power;
}

int main (){
	int x, y;
	
	cout << "Give me the parameter" << endl;
	cin >> x;
	cout << "Give me the pow" << endl;
	cin >> y;

int potencia = superpower (x,y);
cout << potencia;
	
	return 0;
	
}
