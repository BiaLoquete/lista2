#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
  int n, somadivisores;
  
  cout << "Digite um número: ";
  cin >> n;
  
  cout << "Números perfeitos menores ou iguais a " << n << ":\n";
  
  // verifica cada número 
  for (int i = 1; i <= n; i++) {
    somadivisores = 0;
    
    // soma os divisores próprios do número
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
