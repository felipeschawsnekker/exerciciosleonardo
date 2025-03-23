#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double num, simples, composto;
    int cont;
    
    cout << "Escolha um valor para sua aplicação: ";
    cin >> num;
    
    cout << "Escolha o tempo (meses) para sua aplicação de juros simples ou compostos: ";
    cin >> cont;
    
    simples = num * (1 + 0.01 * cont);
    composto = num * pow(1.01, cont);
    
    cout << fixed << setprecision(3);
    cout << "O seu valor total com juros simples é: " << simples << endl;
    cout << "O seu valor total com juros compostos é: " << composto << endl;
    
    return 0;
    
}
