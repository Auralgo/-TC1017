#include <iostream>
using namespace std;

void triangles (int size){
 for (int c = 1; c <= size; c++){
   for (int linea = 1; linea <= c; linea++){
     cout << "T";
   }
   cout << endl;
 }
 for (int c = (size - 1); c > 0; c--){
   for (int linea = 1; linea <=c; linea++){
     cout << "T";
   }
   cout << endl;
 }
}

int main (){
  int size;
  cout << "Dame la cantidad máxima de T"<< endl;
  cin >> size;
  triangles(size);
  return 0;
}
