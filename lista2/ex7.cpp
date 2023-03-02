#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
  int n, somadivisores;
  
  cout << "Digite um n�mero: ";
  cin >> n;
  
  cout << "N�meros perfeitos menores ou iguais a " << n << ":\n";
  
  // verifica cada n�mero 
  for (int i = 1; i <= n; i++) {
    somadivisores = 0;
    
    // soma os divisores pr�prios do n�mero
    for (int j = 1; j < i; j++) {
      if (i % j == 0) {
        somadivisores += j;
      }
    }
    
    
    if (somadivisores == i) {
      cout << i << " ";
    }
  }
  
  return 0;
}
