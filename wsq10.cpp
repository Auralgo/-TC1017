#include <iostream>
#include <cmath>
using namespace std;

/*
int deviation (int array []){
  int sum = 0;
  float avarage, xi, deviation, suma = 0.0;
  for (int i = 0; i >= 9; i++){
    sum = sum + array[i];
  }
  avarage = sum/10.0;

  for (int c = 0; c >= 0; c++){
    xi = (array[c] + array[c+1])/2.0;
    suma = suma + xi;
    c++;
  }


}
*/





float calcular_promedio (float array [], int size) {
  int i;
  float promedio;
  int suma = 0;
  for (int i = 0; i <= size; i++){
    suma = suma + array[i];

  }
  promedio = suma/size;
  return promedio;
}



int calcular_suma(float a[], int size){
  int total = 0;
  for (int i = 0; i < size; i++){
       total = total + a[i];
  }
  return total;
}

int calcular_desviacion(float sum, float promedio, int size, float array[]) {
  //float deviation;


for (int i = 0; i < size; i++){

  sum=sum+pow(array[i]-promedio,2);

}

return sqrt(sum/size);



  }

int main(){
  float promedio;
  float sum;
  float suma;
  float deviation;
  int size = 5;
  float array[size];

  for (int i = 0; i <size; i++){
    cout << "Give me the variables" << endl;
    cin >> array[i];
  }

  suma = calcular_suma(array,size);
  promedio = calcular_promedio(array, size);
  deviation = calcular_desviacion(sum,promedio,size,array);
  cout <<"The sum of the numbers is " << suma << endl;
  cout << "The average of the numbers is " << promedio << endl;
  cout << "The standard deviation is " << deviation << endl;

  return 0;
}
