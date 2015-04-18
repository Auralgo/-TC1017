//Aurora Alvarado Gonzalez. A01630329
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int isPalindrome(string x, int size){

	if(equal(x.begin(), x.begin() + x.size()/2, x.rbegin())){
	cout << "Palindrome" << endl;
	} else{
	cout << "Not a palindrome" << endl;
	}
	return 0;
}

int main(){
string x;
int size, palindromo;

cout << "Give me a word" << endl;
cin >> x;
palindromo = isPalindrome(x, size);

return palindromo;
}

