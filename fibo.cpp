#include <iostream>
using namespace std;

unsigned long fibonacci (unsigned long n){
  if (n == 0 || n==1){
    return n;
  }
  else {
    return fibonacci (n - 1) + fibonacci (n - 2);
  }
}

int main (){
  unsigned long result, number;

  cout << "Enter an integer" << endl;
  cin >> number;

  result = fibonacci (number);

  cout << "Fibonacci of " << number << " is " << result << endl;

  return 0;
}
