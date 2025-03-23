//ALGORITMO NOME

#include <iostream>
#include <string>
#include<cctype>
using namespace std;
int main (){
string nome;

    
    cout<<"Digite seu nome (Apenas letras): ";
    getline(cin,nome);
    
    while (nome.empty()){
        cout<<"Nome vazio. Tente novamente: ";
        getline(cin,nome);
    }
    
    bool valido = true;
    
    
    while (true)
    {
        valido=true;
        for (char caractere:nome)
        {
            if(!isalpha(caractere) && caractere != ' ')
            {
                valido=false;
                break;
            }
        }
    
    if(valido)
    {
        break;
    }
    
    else 
    {
        cout<<"Nome invalido, use apenas letras: ";
        getline(cin,nome);
    }
    
    }
    
    nome[0]=toupper(nome[0]);
    
    for (int i=1; i<nome.length();i++)
    {
        if (nome[i-1]==' ')
        {
            nome[i]=toupper(nome[i]);
        }
        else
        {
            nome[i]=tolower(nome[i]);
        }   
    }
    
    
    
    cout<<"Seu nome é: "<<nome<<endl;
    
    cout<<endl;
    
    cout<<"O primeiro caractere é: "<<nome[0]<<endl;
    cout<<"O ultimo caractere é: "<<nome[nome.length()-1]<<endl;
    
    if(nome.length()>=3)
    {
        cout<<"Do primeiro até o terceiro: "<<nome.substr(0,3)<<endl;
    }
    else
    {
        cout<<"Nome menor que 3 caracteres, portanto não há terceira letra."<<endl;
    }

    if(nome.length()>=4)
    {
        cout<<"O quarto caractere é: "<<nome[3]<<endl;
    }
    else
    {
        cout<<"Nome menor que 4 caracteres, portanto não há quarta letra."<<endl;
    }
    
    if(nome.length()>1)
    {
        cout<<"Todos menos o primeiro: "<<nome.substr(1)<<endl;
    }
    else
    {
        cout<<"O nome só tem 1 caractere, não há mais caracteres para exibir."<<endl;
    }
    
    if(nome.length()>2){
        cout<<"Os dois últimos: "<<nome[nome.length()-2]<<nome[nome.length()-1]<<endl;
    }
    else
    {
        cout<<"Nome menor que 3 caracteres, portanto não há dois últimos."; 
    }
    return 0;
    
}
