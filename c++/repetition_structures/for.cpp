

#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Diga um numero inteiro nao negativo: ";
    cin >> n;

    int soma = 0;

    for(int j=1; j<=n; j+=1){
        soma+=1;
    }

    cout << "A soma dos numeros de 0 ate " << n << " = " << soma << endl;

    return 0;
}

