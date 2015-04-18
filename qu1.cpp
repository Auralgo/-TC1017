//Aurora Alvarado Gonzalez. A01630329
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
  size = 6;
  triangles(size);
  return 0;
}
