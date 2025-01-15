//codigo clase es como escuela4.cpp pero aqui el usuario pregunta por los valores del arreglo, el otro iba de 1 hasta el numero que dijiera el usuario
#include <iostream>

int** Crear(int fil, int col);
void capturar(int** arr, int fil, int col);
void imprimir(int** arr, int fil, int col);
void destruir(int** arr, int fil);

using namespace std;

int main() {
    int fil, col;

    cout << "Filas: ";
    cin >> fil;

    cout << "Columnas: ";
    cin >> col;

    int** arr = Crear(fil, col);

    capturar(arr, fil, col);
    imprimir(arr, fil, col);

    destruir(arr, fil);  
    return 0;
}

int** Crear(int fil, int col) {
    int** arr = new int*[fil];
    for (int i = 0; i < fil; i++) {
        arr[i] = new int[col];
    }
    return arr;  
}

void capturar(int** arr, int fil, int col) {
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Ingrese valor para [" << i << "][" << j << "]: ";
            cin >> arr[i][j];  
        }
    }
}

void imprimir(int** arr, int fil, int col) {
    cout << "Matriz capturada:" << endl;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void destruir(int** arr, int fil) {
    for (int i = 0; i < fil; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    cout << "Memoria liberada correctamente." << endl;
}
