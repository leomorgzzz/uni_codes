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
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = i +1;
        }
        
    }
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";  
        }
        cout << endl;
    }
    for (int i = 0; i < fil; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}