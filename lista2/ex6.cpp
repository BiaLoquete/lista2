#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Portuguese");
  int n, termo1 = 0, termo2 = 1, proximo;
  
  cout << "Digite um número: ";
  cin >> n;
  
  cout << "Sequência de Fibonacci até o " << n << "º termo:\n";
  
  
  for (int i = 0; i < n; i++) {
    cout << termo1 << " ";
    proximo = termo1 + termo2;
    termo1 = termo2;
    termo2 = proximo;
  }
  
  return 0;
}
