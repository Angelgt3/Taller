//Calculadora básica:
#include <iostream>
using namespace std;

int main() {
    char operador;
    float numero1, numero2;
    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> operador;
    cout << "Ingrese dos numeros: ";
    cin >> numero1 >> numero2;

    float resultado;
    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                cout << "Error: División por cero no permitida." << endl;
                return 1; // Se sale del programa
            }
            break;
        default:
            cout << "Operador no válido." << endl;
            return 1;// Se sale del programa
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}