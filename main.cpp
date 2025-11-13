#include <iostream>
#include "menu.cpp"
using namespace std;

int main(){

    int opcao;

    do{
    cout << "|    MENU     |" << endl;
    cout << "Escolha uma opcao:" << endl;
    cout << "1. Cor" << endl;
    cout << "2. Interior" << endl;
    cout << "3. Rodas" << endl;
    cout << "4. Carroceria" << endl;
    cout << "5. Motor" << endl;
    cout << "6. Finalizar" << endl;
    cout << " " << endl;

    cin >> opcao;
    menu(opcao);
    }while(opcao != 6);
   
    return 0;
}