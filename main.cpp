#include <iostream>

using namespace std;

int main() {
  int espa=0;
  int mate=0;
  int econo=0;
  int progra=0;
  int ingles=0;
  float promedio=0;

  cout<<"Digite el promedio de Español\n";
  cin>>espa;
  cout<<"Digite el promedio de Matemáticas\n";
  cin>>mate;
  cout<<"Digite el promedio de Economía\n";
  cin>>econo;
  cout<<"Digite el promedio de Programación\n";
  cin>>progra;
  cout<<"Digite el promedio de Ingles\n";
  cin>>ingles;

  promedio=(espa+mate+econo+progra+ingles)/5;

  cout<< "el promedio es de "<<promedio;





}