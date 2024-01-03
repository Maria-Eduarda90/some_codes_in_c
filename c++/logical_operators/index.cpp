#include<iostream>

using namespace std;

int main(){
    float nota1, nota2;

    cout << "Informe a nota 1: ";
    cin >> nota1;

;   cout << "Informe a nota 2: ";
    cin >> nota2;

    float media = (nota1+nota2)/2;
    cout << "Media= " << media << endl;

    float freq;
    cout << "Qual e a frequencia do aluno?\n";
    cin >> freq;

    //if(media >= 5 && freq >= 75){

    //    cout << "Aluno Aprovado";
    //} else {
    //    cout << "Aluno Reprovado";
    //}

    if(media < 5 || freq < 75){

        cout << "Aluno Aprovado";
    } else {
        cout << "Aluno Reprovado";
    }
}
