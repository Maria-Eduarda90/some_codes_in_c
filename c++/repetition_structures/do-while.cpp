

#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Diga um numero inteiro não negativo: ";
    cin >> n;

    int soma = 0;
    int cont = 1;

    do {
        soma+=cont;
        cont++;
    } while (cont <= n);

    cout << "A soma dos numeros de 0 ate " << n << " = " << soma << endl;

    return 0;
}
