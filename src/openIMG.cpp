#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

string lower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

void abrirImagem(string cor, string rodas, string carroceria) {


    if ((cor == "Branco" || cor == "Prata") && rodas == "Pista") {
        rodas = "Drift";
    }

    string arquivo = lower(cor) + "," + lower(rodas) + " e " + lower(carroceria) + ".jpeg";
    string comando = "start \"\" \"../img/" + arquivo + "\"";

    cout << arquivo << endl;
    system(comando.c_str());
}