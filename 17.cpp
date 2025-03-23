//Entrar com o nÚmero e a base em que se deseja calcular o logaritmo desse número e imprimi-lo

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main (){
double num,base,logaritmo;

    cout<<"Escolha um numero para obter seu logaritmo: ";
    cin>>num;

    while (num<0 || num==0){
        cout<<"Erro. Escolha um numero maior que zero ou diferente de zero: ";
        cin>>num;
}

    cout<<"Escolha uma base para seu logaritmo: ";
    cin>>base;
    
    while (base<=0 || base==1){
        cout<<"Erro. Escolha uma base maior que zero ou diferente de zero ou diferente de um: ";
        cin>>base;
}

cout<<defaultfloat<<setprecision(8);
logaritmo=log(num)/log(base);

cout<<"O valor do seu logaritmo é: "<<logaritmo;

return 0;
}
