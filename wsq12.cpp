#include <iostream>
using namespace std;

int gcd_funcion(int x, int y){
  int  gcd;
  for(int i=1; i<=x&&i<=y; i++){


       if(x%i==0 && y%i == 0 ){

                       gcd=i;

     }

  }
  return gcd;
}
int main() {

int first_number;
cout<<"Enter First Number : ";
cin>>first_number;

int  second_number;
cout<<"Enter Second Number: ";
cin>>second_number;



cout<<"Greatest Common Divison (GCD):"<<gcd_funcion(first_number,second_number)<<endl;
return 0;
}


//http://fahad-cprogramming.blogspot.mx/2013/11/find-greatest-common-divisor-gcd-of-two.html
