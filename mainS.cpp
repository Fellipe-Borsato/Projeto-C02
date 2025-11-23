#include <iostream>
#include "struct.cpp"
using namespace std;

int main(){

    int opcao, escolha, condicao;
    carro Carro;

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
    
    switch(opcao)
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
                cout << "3. Simples" << endl;
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
                    case 1: Carro.carroceria = "Conversivel"; break;
                    case 2: Carro.carroceria = "Sedan"; break;
                    case 3: Carro.carroceria = "SUV"; break;
                    case 4: Carro.carroceria = "Simples"; break;
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
    
    
    
    }while(opcao != 6);
   
    cout << "entrando no if" << endl;
    if(Carro.cor == "Branco")
	{
		cout << "entrei no if"<< endl;
		if(Carro.carroceria == "Conversivel" && Carro.rodas =="Pista")
		{
			  cout << "image branco, conversivel, pista" << endl;
		}
		else if(Carro.carroceria == "Conversivel" && Carro.rodas =="Drift")
		{
				cout << "image branco, conversivel, Drift"<< endl;
			   //image branco, conversivel, Drift
		}
		else if(Carro.carroceria == "Sedan" && Carro.rodas =="Pista")
		{
			cout << "image branco, Sedan, pista"<< endl;
			   //image branco, Sedan, pista
		}
		else if(Carro.carroceria == "Sedan" && Carro.rodas =="Drift")
		{
			cout << "image branco, Sedan, Drift"<< endl;
			   //image branco, Sedan, Drift
		}
		else if(Carro.carroceria == "SUV" && Carro.rodas =="Pista")
		{
			cout << "image branco, SUV, pista"<< endl;
			   //image branco, Suv, pista
		}
		else if(Carro.carroceria == "SUV" && Carro.rodas =="Drift")
		{
			cout << "image branco, SUV, Drift"<< endl;
			   //image branco, Suv, Drift
		}
		
		else if(Carro.carroceria == "Simples" && Carro.rodas =="Pista")
		{
			cout << "image branco, simples, pista"<< endl;
			   //image branco,simples, pista
		}
		else if(Carro.carroceria == "Simples" && Carro.rodas =="Drift")
		{
			cout << "image branco, simples, Drift"<< endl;
			   //image branco, simples, Drift
		}
		
		}
	else if(Carro.cor == "Vermelho")
	{
		cout << "entrei no if 2" << endl;
		if(Carro.carroceria == "Conversivel" && Carro.rodas =="Pista")
		{
			  cout << "image Vermelho, conversivel, pista" << endl;
		}
		else if(Carro.carroceria == "Conversivel" && Carro.rodas =="Drift")
		{
				cout << "image Vermelho, conversivel, Drift"<< endl;
			   //image Vermelho, conversivel, Drift
		}
		else if(Carro.carroceria == "Sedan" && Carro.rodas =="Pista")
		{
			cout << "image Vermelho, Sedan, pista"<< endl;
			   //image Vermelho, Sedan, pista
		}
		else if(Carro.carroceria == "Sedan" && Carro.rodas =="Drift")
		{
			cout << "image Vermelho, Sedan, Drift"<< endl;
			   //image Vermelho, Sedan, Drift
		}
		else if(Carro.carroceria == "SUV" && Carro.rodas =="Pista")
		{
			cout << "image Vermelho, SUV, pista"<< endl;
			   //image Vermelho, Suv, pista
		}
		else if(Carro.carroceria == "SUV" && Carro.rodas =="Drift")
		{
			cout << "image Vermelho, SUV, Drift"<< endl;
			   //image Vermelho, Suv, Drift
		}
		
		else if(Carro.carroceria == "Simples" && Carro.rodas =="Pista")
		{
			cout << "image Vermelho, simples, pista"<< endl;
			   //image Vermelho,simples, pista
		}
		else if(Carro.carroceria == "Simples" && Carro.rodas =="Drift")
		{
			cout << "image Vermelho, simples, Drift"<< endl;
			   //image Vermelho, simples, Drift
		}
		
		}
	else if(Carro.cor == "Preto")
	{
		cout << "entrei no if";
		if(Carro.carroceria == "Conversivel" && Carro.rodas =="Pista")
		{
			  cout << "image Preto, conversivel, pista" << endl;
		}
		else if(Carro.carroceria == "Conversivel" && Carro.rodas =="Drift")
		{
				cout << "image Preto, conversivel, Drift"<< endl;
			   //image Preto, conversivel, Drift
		}
		else if(Carro.carroceria == "Sedan" && Carro.rodas =="Pista")
		{
			cout << "image Preto, Sedan, pista"<< endl;
			   //image Preto, Sedan, pista
		}
		else if(Carro.carroceria == "Sedan" && Carro.rodas =="Drift")
		{
			cout << "image Preto, Sedan, Drift"<< endl;
			   //image Preto, Sedan, Drift
		}
		else if(Carro.carroceria == "SUV" && Carro.rodas =="Pista")
		{
			cout << "image Preto, SUV, pista"<< endl;
			   //image Preto, SUV, pista
		}
		else if(Carro.carroceria == "SUV" && Carro.rodas =="Drift")
		{
			cout << "image Preto, SUV, Drift"<< endl;
			   //image Preto, SUV, Drift
		}
		
		else if(Carro.carroceria == "Simples" && Carro.rodas =="Pista")
		{
			cout << "image Preto, simples, pista"<< endl;
			   //image Preto,simples, pista
		}
		else if(Carro.carroceria == "Simples" && Carro.rodas =="Drift")
		{
			cout << "image Preto, simples, Drift"<< endl;
			   //image Preto, simples, Drift
		}
		
		}
    else if(Carro.cor == "Cinza")
	{
		cout << "entrei no if";
		if(Carro.carroceria == "Conversivel" && Carro.rodas =="Pista")
		{
			  cout << "image Cinza, conversivel, pista" << endl;
		}
		else if(Carro.carroceria == "Conversivel" && Carro.rodas =="Drift")
		{
				cout << "image Cinza, conversivel, Drift"<< endl;
			   //image Cinza, conversivel, Drift
		}
		else if(Carro.carroceria == "Sedan" && Carro.rodas =="Pista")
		{
			cout << "image Cinza, Sedan, pista"<< endl;
			   //image Cinza, Sedan, pista
		}
		else if(Carro.carroceria == "Sedan" && Carro.rodas =="Drift")
		{
			cout << "image Cinza, Sedan, Drift"<< endl;
			   //image Cinza, Sedan, Drift
		}
		else if(Carro.carroceria == "SUV" && Carro.rodas =="Pista")
		{
			cout << "image Cinza, SUV, pista"<< endl;
			   //image Cinza, SUV, pista
		}
		else if(Carro.carroceria == "SUV" && Carro.rodas =="Drift")
		{
			cout << "image Cinza, SUV, Drift"<< endl;
			   //image Cinza, Suv, Drift
		}
		
		else if(Carro.carroceria == "Simples" && Carro.rodas =="Pista")
		{
			cout << "image Cinza, simples, pista"<< endl;
			   //image Cinza,simples, pista
		}
		else if(Carro.carroceria == "Simples" && Carro.rodas =="Drift")
		{
			cout << "image Cinza, simples, Drift"<< endl;
			   //image Cinza, simples, Drift
		}
		
		}
    
    
    
    
    
    
    
    return 0;
}