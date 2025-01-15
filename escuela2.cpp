//codigo para usar punteros simples clase irene

#include <iostream>

using namespace std;

int main (){

    int size;
    cout << "Tamalo del arreglo: ";
    cin >> size;

    int* arr = new int [size];

    for (int i = 0; i < size; i++){
        arr[i] = i +1;
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    
    delete[] arr;
    



    return 0; 
}