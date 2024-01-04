#include<iostream>

using namespace std;

class carro {
    private:
    int ano;
    float valor, km;

    public:

    carro(int ano=0, float valor=-1, float km=-1){
        this->ano = ano;
        this->valor = valor;
        this->km = km;
    }

    void setano(int ano){
        this->ano = ano;
    }

    int getano(){
        return ano;
    }

    void setvalor(float valor){
        this->valor = valor;
    }

    float getvalor(){
        return valor;
    }

    void setkm(float km){
        this->km = km;
    }

    float getkm(){
        return km;
    }
};

int main(){

    carro palio(1995, 20.000, 100.000);
    // palio.setano(1995);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;


    // palio.setvalor(20.000);
    cout << "Valor: " << palio.getvalor() << endl;

    // palio.setkm(100.0);
    cout << "Km: " << palio.getkm() << endl;

    return 0;
}
