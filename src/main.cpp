#include <iostream>
#include "struct.cpp"
#include "openIMG.cpp"

using namespace std;

int main() {

    int opcao, escolha;
    carro Carro;

    do {
        cout << " " << endl;
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

        switch (opcao) {

        case 1:
            cout << "\nEscolha a cor:\n1. Branco\n2. Vermelho\n3. Preto\n4. Prata\n";
            cin >> escolha;
            if (escolha == 1) Carro.cor = "Branco";
            else if (escolha == 2) Carro.cor = "Vermelho";
            else if (escolha == 3) Carro.cor = "Preto";
            else if (escolha == 4) Carro.cor = "Prata";
            break;

        case 2:
            cout << "\nEscolha o interior:\n1. Esportivo\n2. Luxo\n3. Simples\n";
            cin >> escolha;
            if (escolha == 1) Carro.interior = "Esportivo";
            else if (escolha == 2) Carro.interior = "Luxo";
            else if (escolha == 3) Carro.interior = "Simples";
            break;

        case 3:
            cout << "\nEscolha as rodas:\n1. Pista\n2. Drift\n";
            cin >> escolha;
            if (escolha == 1) Carro.rodas = "Pista";
            else if (escolha == 2) Carro.rodas = "Drift";
            break;

        case 4:
            cout << "\nEscolha a carroceria:\n1. Conversivel\n2. Sedan\n3. SUV\n4. Coupe\n";
            cin >> escolha;
            if (escolha == 1) Carro.carroceria = "Conversivel";
            else if (escolha == 2) Carro.carroceria = "Sedan";
            else if (escolha == 3) Carro.carroceria = "SUV";
            else if (escolha == 4) Carro.carroceria = "Coupe";
            break;

        case 5:
            cout << "\nEscolha o motor:\n1. V10\n2. V6\n3. V8\n";
            cin >> escolha;
            if (escolha == 1) Carro.motor = "V10";
            else if (escolha == 2) Carro.motor = "V6";
            else if (escolha == 3) Carro.motor = "V8";
            break;

        case 6:
            cout << "Finalizando..." << endl;
            break;

        default:
            cout << "Opcao invalida." << endl;
        }

    } while (opcao != 6);
    
    string carroFinal[5];

	carroFinal[0] = "Cor: " + Carro.cor;
	carroFinal[1] = "Interior: " + Carro.interior;
	carroFinal[2] = "Rodas: " + Carro.rodas;
	carroFinal[3] = "Carroceria: " + Carro.carroceria;
	carroFinal[4] = "Motor: " + Carro.motor;


	cout << "\n===== CARRO ESCOLHIDO =====" << endl;

	for (int i = 0;i< 5;i++) {
    cout << carroFinal[i] << endl;
	}

	cout << "=============================" << endl;

    cout << "Pressione ENTER para ver seu carro";
    cin.ignore();
    cin.get();

    abrirImagem(Carro.cor, Carro.rodas, Carro.carroceria);

    return 0;
}

