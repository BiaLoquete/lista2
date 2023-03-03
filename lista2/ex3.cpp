#include <iostream>

using namespace std;


int main() {
    int n, res, i, j;
    
    cout << "Insira o seu numero aqui: ";
    cin >> n;
    cout <<"Voce inseriu este numero: "<<n<<"";
    for (i=n; i>1; i--) {
        int j=2;
        while ((j <= i/2) && (i%j != 0))
            j++;
        if (j>i/2)
            cout << ""<<i<<"";
    }
    return 0;
}
