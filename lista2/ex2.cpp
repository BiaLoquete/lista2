#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");  
	
	int numero,resto,somatorio;

    cout<< "Introduza um número inteiro para obter o somatório dos seus digitos: \n";
    cin>> numero;
    somatorio=0;

    while (numero>0)
    {
    resto=numero%10;
    numero=(numero-resto)/10;
    somatorio=somatorio+resto;
    }

    cout <<"O somatório é " <<somatorio;

}
