#include <iostream>

using namespace std;

class TorresDeHanoi {
private:
    int numDiscos;

public:
    TorresDeHanoi();
    void hanoi();
    void moverDisco(int numDiscos, int torreOrigen, int torreDestino, int torreAuxiliar);
};

TorresDeHanoi::TorresDeHanoi() {
    numDiscos = 0;
}

void TorresDeHanoi::hanoi() {
    cout << "Ingresa la cantidad de discos: ";
    cin >> numDiscos;

    moverDisco(numDiscos, 1, 3, 2);
}

void TorresDeHanoi::moverDisco(int numDiscos, int origen, int destino, int auxiliar) {
    if (numDiscos == 1) {
        cout << "mueve disco de la torre " << origen << " a la torre " << destino << endl;
    } else {
        moverDisco(numDiscos - 1, origen, auxiliar, destino);
        cout << "Mueve disco de la torre " << origen << " a la torre " << destino << endl;
        moverDisco(numDiscos - 1, auxiliar, destino, origen);
    }
}

int main() {
    TorresDeHanoi juego;
    juego.hanoi();
}
