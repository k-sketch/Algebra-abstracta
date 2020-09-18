#include <iostream>
using namespace std;

int main(){
  int a, n, q, r;
  cout << "Ingresa el valor de a: "; cin >> a;
  cout << "Ingresa el valor de n: "; cin >> n;
  q = a/n;
  r = (a%n);
  if (r < 0){
    q = +1;
  }
  cout << a << " = " << q << " x " << n << " + " << r; 
  return 0;
}