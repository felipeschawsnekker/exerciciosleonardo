//ALGORITMO kW


#include <iomanip>
#include <iostream>
using namespace std;
int main (){
double kw,salario,precokw,desconto10,totalkw;

    cout<<"Digite o valor do salario minimo atual (1518): ";
    cin>>salario;
    
    while (salario!=1518.0){
    cout<<"Valor errado. Tente novamente: ";
    cin>>salario;
    }
    
    cout<<fixed<<setprecision(3);
    precokw=salario/700.0;
    
    cout<<"O valor de cada kW é de: "<<precokw<<" reais"<<endl;
    cout<<endl;
    
    cout<<"Digite o valor, em kW, da sua residência: ";
    cin>>kw;
    
    cout<<endl;
    
    totalkw=kw*precokw;
    desconto10=totalkw*0.90;
    
    cout<<"O valor a ser pago é de: "<<totalkw<<" reais"<<endl;
    cout<<"O valor com desconto é: "<<desconto10<<" reais"<<endl;
    
return 0;    
}
