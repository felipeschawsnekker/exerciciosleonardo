//Ler um ângulo em graus e imprimir: seno, co-seno, tangente, secante, co-secante e co-tangente deste ângulo.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
    double angulo,num,seno,cosseno,tangente,secante,cossecante,cotangente;
    
  
    
    cout<<"Digite um ângulo em graus: ";
    cin>>angulo;
    
    num=(angulo*M_PI)/180;
    
    cout<<defaultfloat<<setprecision(8);
    seno=sin(num);
    cosseno=cos(num);
    tangente=tan(num);
    
    cout<<"O seno é: "<<seno<<endl;
    cout<<"O cosseno é: "<<cosseno<<endl;
    cout<<"A tangente é: "<<tangente<<endl;
    
    if (seno!=0){
        cossecante=1/seno;
        cout<<"A cossecante é: "<<cossecante<<endl;
    } 
    else {
        cout<<"Cossecante não pode ser calculada"<<endl;
    } 
    
    
    if (cosseno!=0){
       secante=1/cosseno;
       cout<<"A secante é: "<<secante<<endl;
    }
    else {
        cout<<"Secante não pode ser calculada"<<endl;
    }

    if(tangente!=0){
        cotangente=1/tangente;
        cout<<"A cotangente é: "<<cotangente<<endl;
    }
    else {
        cout<<"Cotangente nao pode ser calculada";
    }
    
return 0;

}
