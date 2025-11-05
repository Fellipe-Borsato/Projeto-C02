#include <iostream>

using namespace std;

int menu()
{
    int opcao, condicao = 0;
    int escolhas[4];

    while(condicao==0)
    {
        cout << "|    MENU     |" << endl;
        cout << "Escolha uma opcao:" << endl;
        cout << "1. Cor" << endl;
        cout << "2. Interior" << endl;
        cout << "3. Rodas" << endl;
        cout << "4. Carroceria" << endl;
        cout << "5. Motor" << endl;
        cout << "6. Finalizar" << endl;

        cin >> opcao;

        switch opcao:
        {
            case 1:
                cout << "Escolha a cor desejada:" << endl;
                cout << "1. Branco" << endl;
                cout << "2. Vermelho" << endl;
                cout << "3. Preto" << endl;
                cout << "4. Cinza" << endl;
                cin >> escolhas[0];
                break;
            case 2:
                cout << "Escolha o interior desejado:" << endl;
                cout << "1. Esportivo" << endl;
                cout << "2. Luxo" << endl;
                cout << "2. Simples" << endl;
                cin >> escolhas[1];
                break;
            case 3:
                cout << "Escolha as rodas desejadas:" << endl;
                cout << "1. Pista" << endl;
                cout << "2. Drift" << endl;
                cin >> escolhas[2];
                break;
            case 4:
                cout << "Escolha a carroceria desejada:" << endl;
                cout << "1. Conversivel" << endl;
                cout << "2. Sedan" << endl;
                cout << "3. SUV" << endl;
                cout << "4. Simples" << endl;
                cin >> escolhas[3];
                break;
            case 5:
                cout << "Escolha o motor desejado:" << endl;
                cout << "1. V10" << endl;
                cout << "2. V6" << endl;
                cout << "3. V8" << endl;
                cin >> escolhas[4];
                break;
            case 6:
                cout << "Finalizando escolha..." << endl;
                condicao = 1;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }

    }

    return escolhas;
}