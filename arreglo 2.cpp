#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    int numeros[N];
    int pares[N], impares[N];
    int contPares = 0, contImpares = 0;

    for(int i = 0; i < N; i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];
        if (numeros[i] % 2 == 0) {
            pares[contPares++] = numeros[i];
        } else {
            impares[contImpares++] = numeros[i];
        }
    }

    cout << "Elementos pares: ";
    for(int i = 0; i < contPares; i++) {
        cout << pares[i] << " ";
    }
    cout << endl;

    cout << "Elementos impares: ";
    for(int i = 0; i < contImpares; i++) {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}

