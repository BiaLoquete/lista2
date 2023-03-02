#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
  int decimal, binario[32], indice = 0;
  
  cout << "Digite um número inteiro: ";
  cin >> decimal;
  
  // converte para binário
  while (decimal > 0) {
    binario[indice] = decimal % 2;
    decimal /= 2;
    indice++;
  }
  
  cout << "Valor em binário: ";
  for (int i = indice - 1; i >= 0; i--) {
    cout << binario[i];
  }
  
  return 0;
}
