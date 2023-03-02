#include <iostream>
using namespace std;

int main() {
	 setlocale(LC_ALL, "Portuguese");
  int n, fatorial = 1;
  
  cout << "Digite um número: ";
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    fatorial *= i;
  }
  
  cout << "O fatorial de " << n << " é " << fatorial << endl;
  
  return 0;
}
