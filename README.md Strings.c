# Strings.c
#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    char L1, L2;

    // Solicitando a string e as letras ao usuário
    cout << "Digite uma string: ";
    getline(cin, inputString);  // Leitura da string com espaços

    cout << "Digite a letra que deseja substituir (L1): ";
    cin >> L1;

    cout << "Digite a letra pela qual deseja substituir (L2): ";
    cin >> L2;

    // Percorrendo a string e substituindo L1 por L2
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == L1) {
            inputString[i] = L2;
        }
    }

    // Exibindo o resultado
    cout << "String resultante: " << inputString << endl;

    return 0;
}
