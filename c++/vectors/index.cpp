
#include<iostream>

using namespace std;

int main(){

    // aloca��o estatica
    int v[4] = {5, 10};

    for(int i = 0; i < 4; i++){
        cout << v[i] << endl;
    }

    // aloca��o dinamica
    int tamanho;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanho;
    int*  vetor = new int[tamanho];

    for(int i=0; i < tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: " << endl;
        cin >> vetor[i];
    }

    for(int i; i < tamanho; i++){
        cout << vetor[i] << " ";
    }

    cout << endl;
}
