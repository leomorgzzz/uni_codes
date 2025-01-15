//mismo codigo que escuela3.cpp pero para que me acuerde bien como se hace xd

#include <iostream>

using namespace std;
int main(){

    int fil, col;

    cout << "Filas: ";
    cin >> fil;

    cout << "Columnas: ";
    cin >> col;

    int** arr = new int*[fil];
    for (int i = 0; i < fil; i++)
    {
        arr[i] = new int[col];
    }
    

}