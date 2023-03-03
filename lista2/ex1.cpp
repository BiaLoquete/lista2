#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese");
    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Divisores de " << num << ": ";

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

