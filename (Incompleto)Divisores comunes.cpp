#include <iostream>
using namespace std;

class div_comunes{
  public:
  char db[];
  char da[];
  void d_a(int a);
  void d_b(int b);
  void d_comunes(char, char);
};

void div_comunes::d_a(int a){
  int g;
  for(int i = 0; i <= a; i++){
    g = a%i;
    if(g==0){
      da[i] = g;
    }
  }
}

void div_comunes::d_b(int b){
  int f;
  for(int j = 0; j <= b; j++){
    f = b%j;
    if(f==0){
      db[j] = f;
    }
  }
}

void div_comunes::d_comunes(char da[], char db[]){
  char dc[];
  for(int k = 0; k < ; k++){
    for(int l = 0; l < ; l++){
      if(da[k] == da[j]){
        dc[] = da[k];
      }
    }
  }
};



int main() {
  int a, b;
  div_comunes a1, b1, c1;
  cout << "Escribe 2 numeros enteros: ";
  cout << "\n Primer numero: "; cin >> a;
  cout << "\n Segundo numero: "; cin >> b;
  a1.d_a(a);
  b1.d_b(b);
}