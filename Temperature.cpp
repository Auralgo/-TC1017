#include <iostream> //Aurora
using namespace std;

int main ()
{
	int temperature, celsius;
	cout << "Write the temperature in F" << endl;
	cin >> temperature;
	celsius = 5*(temperature-32)/9;
	cout << "Your temperature in celsius is " << celsius << endl;
	if(celsius >= 100){
			cout << "The water is just boiling" << endl;
	} else{
		cout <<"The water would not boil" << endl;
	}
}