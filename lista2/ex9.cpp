#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
  int num, limite;
  
  cout << "Digite um número inteiro: ";
  cin >> num;
  
  cout << "Digite um limite para a tabuada: ";
  cin >> limite;
  
  for (int i = 1; i <= limite; i++) {
    cout << num << " x " << i << " = " << (num * i) << endl;
  }
  
  return 0;
}



