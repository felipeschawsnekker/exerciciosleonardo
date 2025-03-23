//Ler quatro nÚmeros e imprimir a média ponderada, sabendo-se que os pesos sãorespectivamente: 1,2,3 e 4.

#include <iostream>
using namespace std;

int main (){
double num1,num2,num3,num4,result;

    cout<<"Digite um numero(Peso 1): ";
    cin>>num1;
    
    cout<<"Digite um numero(Peso 2): ";
    cin>>num2;
    
    cout<<"Digite um numero(Peso 3): ";
    cin>>num3;
    
    cout<<"Digite um numero(Peso 4): ";
    cin>>num4;
    
  
    result=(num1*1+num2*2+num3*3+num4*4)/(1+2+3+4);
    
    cout<<"Sua media ponderada é: "<<result;
    
return 0;
  
}
    
