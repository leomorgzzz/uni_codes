//codigo para punteros bidimensionales clase irene

#include <iostream>

using namespace std;
int main(){

    int filas, columnas;

    cout << "Filas: ";
    cin >> filas;

    cout << "Columnas: ";
    cin >> columnas;

    int** arr = new int*[filas];
    for (int i = 0; i < filas; i++)
    {
        arr[i] = new int[columnas];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            arr[i][j] = i +1;
        }
        
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << arr[i][j] << " ";  
        }
        cout << endl;
    }
    for (int i = 0; i < filas; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}