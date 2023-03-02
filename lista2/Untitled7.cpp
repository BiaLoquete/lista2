#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Portuguese");
  int n, divisor = 2;
  
  cout << "Digite um número: ";
  cin >> n;
  
  cout << "Fatores primos de " << n<< ": ";
  
  while (n> 1) {
    if (n % divisor == 0) {
      cout << divisor << " ";
      n /= divisor;
    } else {
      divisor++;
    }
  }
  
  return 0;
}
