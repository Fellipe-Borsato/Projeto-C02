#include <iostream>
#include "struct.cpp"

using namespace std;

carro menu(int o)
{
    int condicao = 0;
    short escolha;
    carro Carro;

        switch(o)
        {
            case 1:
                cout << "Escolha a cor desejada:" << endl;
                cout << "1. Branco" << endl;
                cout << "2. Vermelho" << endl;
                cout << "3. Preto" << endl;
                cout << "4. Cinza" << endl;
                cout << " " << endl;
                cin >> escolha;

                switch (escolha){
                    case 1: Carro.cor = "Branco"; break;
                    case 2: Carro.cor = "Vermelho"; break;
                    case 3: Carro.cor = "Preto"; break;
                    case 4: Carro.cor = "Cinza"; break;
                }
                break;

            case 2:
                cout << "Escolha o interior desejado:" << endl;
                cout << "1. Esportivo" << endl;
                cout << "2. Luxo" << endl;
                cout << "2. Simples" << endl;
                cout << " " << endl;

                cin >> escolha;

                switch (escolha){
                    case 1: Carro.interior = "Esportivo"; break;
                    case 2: Carro.interior = "Luxo"; break;
                    case 3: Carro.interior = "Simples"; break;
                }
                break;

            case 3:
                cout << "Escolha as rodas desejadas:" << endl;
                cout << "1. Pista" << endl;
                cout << "2. Drift" << endl;
                cout << " " << endl;

                cin >> escolha;

                switch (escolha){
                    case 1: Carro.rodas = "Pista"; break;
                    case 2: Carro.rodas = "Drift"; break;
                }
                break;

            case 4:
                cout << "Escolha a carroceria desejada:" << endl;
                cout << "1. Conversivel" << endl;
                cout << "2. Sedan" << endl;
                cout << "3. SUV" << endl;
                cout << "4. Simples" << endl;
                cout << " " << endl;
                cin >> escolha;

                switch (escolha){
                    case 1: Carro.carroceria = "Branco"; break;
                    case 2: Carro.carroceria = "Vermelho"; break;
                    case 3: Carro.carroceria = "Preto"; break;
                    case 4: Carro.carroceria = "Cinza"; break;
                }
                break;

            case 5:
                cout << "Escolha o motor desejado:" << endl;
                cout << "1. V10" << endl;
                cout << "2. V6" << endl;
                cout << "3. V8" << endl;
                cout << " " << endl;
                cin >> escolha;

                switch (escolha){
                    case 1: Carro.motor = "V10"; break;
                    case 2: Carro.motor = "V6"; break;
                    case 3: Carro.motor = "V8"; break;
                }
                break;

            case 6:
                cout << "Finalizando escolha..." << endl;
                condicao = 1;
                break;

            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    return Carro;
}