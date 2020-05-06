#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sexo;
    int cerveja, refrigerante, espetinho;
    double consumo, ingresso, total;
    cout << fixed << setprecision(2);

    cout << "Sexo: ";
    cin >> sexo;
    cout << "Quantidade de cervejas: ";
    cin >> cerveja;
    cout << "Quantidade de refrigerantes: ";
    cin >> refrigerante;
    cout << "Quantidade de espetinhos: ";
    cin >> espetinho;

    consumo = cerveja*5.0 + refrigerante*3.0 + espetinho*7.0;

    if (sexo == "M") {
        ingresso = 10.0;
    }
    else if (sexo == "F") {
        ingresso = 8.0;
    }

    total = consumo + ingresso;

    cout << endl << "RELATORIO:" << endl;
    cout << "Consumo = R$ " << consumo << endl;

    if (consumo <= 30.0) {
        total = total+4.0;
        cout << "Couvert = R$ 4.00" << endl;
    }
    else {
        cout << "Isento de Couvert" << endl;
    }

    cout << "Ingresso = R$ " << ingresso << endl;
    cout << endl << "Valor a pagar = R$ " << total << endl;

    return 0;
}
