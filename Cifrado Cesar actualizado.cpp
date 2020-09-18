#include <iostream>
using namespace std;

class Cifrado_cesar{
  public:
  int clave;
  char alfabeto[] = {"a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z"};
  char frase;
  char texto; 
  void cifrar(char frase, int clave);
  void descifrar(char texto, int clave);
}

void Cifrado_cesar::cifrar(char frase, int clave){
  char t_cifrado[] = {};
  int i = 0;
  for( int i=0; i < sizeof(frase); i++){
    frase[i] = alfabeto[i+clave];
    t_cifrado = frase[i];
  }
  cout << "Texto cifrado: " << t_cifrado[];
}

void Cifrado_cesar::descifrar(char texto, int clave){
  char t_descifrado[] = {};
  int j = 0;
  for( int j=0; j < sizeof(texto); j++){
    texto[j] = alfabeto[j-clave];
    t_descifrado = texto[j];
  }
  cout << "Texto descifrado: " << t_descifrado[];
}

int main() {
  int opcion;
  cout << "Que quieres hacer?\n";
  cout << "1. Cifrar\n2. Descifrar";
  cin >> opcion;
  if(opcion = 1){
    char frase;
    int clave;
    Cifrado_cesar f;
    cout << "Escribe el texto a cifrar: ";
    cin >> frase;
    cout << "\n Escribe la clave: ";
    cin >> clave;
    f.cifrar(frase,clave);
  }
  else {
    char texto;
    int clave;
    Cifrado_cesar t;
    cout << "Escribe el texto a descifrar: ";
    cin >> texto;
    cout << "\n Escribe la clave: ";
    cin >> clave;
    t.descifrar(texto,clave);
  }
  return 0;
}