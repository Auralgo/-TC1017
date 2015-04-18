//Aurora Alvarado Gonzalez. A01630329
#include <iostream>
using namespace std;

long fibonaccif(long num1, long num2, long i, long fibonaccin){
	num1 = 0;
	num2 = 1;
	long fibonacci;
	for (i=0; i<fibonaccin; i++){
		fibonacci = num1 + num2;
		num1 = num2;
		num2 = fibonacci;
	}
	return fibonacci;
}

int main(){
	long num1, num2, i, fibonaccin;
	cout << "Give me the number" << endl;
	cin >> fibonaccin;
	long n = fibonaccif (num1, num2, i, fibonaccin);
	cout << n;
	return 0;
}
