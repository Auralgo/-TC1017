#include <iostream>
using namespace std;

int gcd (int a, int b){
  if (b == 0){
    return a;
  }
  else {
    gcd (b, a%b);
  }
}

int main (){
  int x, y, g;
  cout << "Give me the first number" << endl;
  cin >> x;
  cout <<"Give me a second number" << endl;
  cin >> y;
  g = gcd(x, y);
  if (g<0){
    g *= -1;
  }

  cout << "Greatest Common Divisor of numbers is " << g << endl;
  return 0;
}
