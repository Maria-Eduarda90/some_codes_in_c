
#include<iostream>

using namespace std;

int somar(int y, int x){

    int soma;
    soma = y + x;
    return soma;

}

int main(){

    int s = somar(7, 8);
    cout << "Soma: " << s << endl;

    return 0;
}
