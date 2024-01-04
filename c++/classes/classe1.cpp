
#include<iostream>

using namespace std;

class carro {
    private:
    int ano;
    float valor, km;

    public:

    carro(int ano, float valor, float km);

    void setano(int ano);

    int getano();

    void setvalor(float valor);

    float getvalor();

    void setkm(float km);

    float getkm();
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


    carro::carro(int ano=0, float valor=-1, float km=-1): ano(ano), valor(valor), km(km){
        this->ano = ano;
        this->valor = valor;
        this->km = km;
    }

    void carro::setano(int ano){
        this->ano = ano;
    }

    int carro::getano(){
        return ano;
    }

    void carro::setvalor(float valor){
        this->valor = valor;
    }

    float carro::getvalor(){
        return valor;
    }

    void carro::setkm(float km){
        this->km = km;
    }

    float carro::getkm(){
        return km;
    }
