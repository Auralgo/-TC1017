#include <iostream>
using namespace std;

int theSum (int x, int y){
	int answer = x + y;
	return answer;
}

int theDifference (int x, int y){
	int answer = x - y;
	return answer;
}

int theProduct (int x, int y){
	int answer = x * y;
	return answer;
}

int theDivision (int x, int y){
	int answer = x / y;
	return answer;
}

int main (){
	int first, second;

	cout << "Give the first number" << endl;
	cin >> first;

	cout << "Give me a second number" << endl;
	cin >> second;

	int sum = theSum(first,second);
	cout << "The sum of both numbers is " << sum << endl;

	int difference = theDifference(first,second);
	cout << "The difference of both numbers is " << difference << endl;

	int product = theProduct(first,second);
	cout << "The product of both numbers is " << product << endl;

	int division = theDivision(first,second);
	cout << "The division of both numbers is " << division << endl;
	
	return 0;
}