//Entrar com um número e imprimir o quadrado e a raiz quadrada desse número.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
double num,raiz,quadrado;

cout<<"Escolha um numero: ";
cin>>num;

 while(num<0) {
     cout<<"Não existe raiz quadrada de numeros menores que zero nos reais \n Escolha outro numero: ";
     cin>>num;
}

cout<<defaultfloat<<setprecision(8);

raiz= sqrt(num);
quadrado= pow(num,2);

cout<<"A raiz quadrada é: "<<raiz<<endl;
cout<<"O quadrado do numero é: "<<quadrado<<endl;

return 0;
}
