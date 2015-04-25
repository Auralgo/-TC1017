#include <iostream>
using namespace std;
 
void findthree(int num[], int LENGHT){
	int sum = 0;
	for(int c = 0; c < LENGHT; c++){
		if ((num[c] % 3)== 0){
			sum = sum + num[c];
		}
	}
	cout << "The sum of the numbers divisible by 3 is" << sum << endl;
}


int main()
{
	int LENGHT;
	cout << "Give me the number of numbers in the array" << endl;
	cin >> LENGHT;
	int num [LENGHT];
	for(int c = 0; c < LENGHT; c++){
		cout << "Give me the numbers of the array" << endl;
		cin >> num[c];
	}
	findthree(num, LENGHT);
    return 0;
}