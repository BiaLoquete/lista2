#include <iostream>
using namespace std;

int main() {
  int n;
  
  cout << "Digite um número: ";
  cin >> n;
  
  cout << "Múltiplos de " << n << " menores que 100:\n";
  
  for (int i = 1; (n * i) < 100; i++) {
    cout << n * i << " ";
  }
  
  return 0;
}
