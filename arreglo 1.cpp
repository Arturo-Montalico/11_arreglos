#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    int numeros[N];
    int sumatoria = 0;
    int contadorCeros = 0;

    for(int i = 0; i < N; i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];
        sumatoria += numeros[i];
        if (numeros[i] == 0) {
            contadorCeros++;
        }
    }

    double porcentajeCeros = (double)contadorCeros / N * 100;

    cout << "Sumatoria de todos los elementos: " << sumatoria << endl;
    cout << "Porcentaje de valores cero ingresados: " << porcentajeCeros << "%" << endl;

    return 0;
}

