#include <iostream>
using namespace std;

int main() {
    cout << "=== ACTIVIDAD No. 4 ===" << endl;
    
    int filas = 3;
    int columnas = 4;
    
    int** matriz = new int*[filas];
    
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
    
    cout << "\n1. Matriz creada dinamicamente (3x4)" << endl;
    
    cout << "\n2. Llenando la matriz con datos:" << endl;
    int valor = 10;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = valor;
            valor += 10;
        }
    }
    
    cout << "\n3. Contenido de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        cout << "   Fila " << i << ": ";
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    // Mostrar direcciones de memoria
    cout << "\n4. Direcciones de memoria de la matriz:" << endl;
    cout << "   Direccion de la matriz (matriz): " << matriz << endl;
    cout << "   Direccion de matriz[0]: " << matriz[0] << endl;
    cout << "   Direccion de matriz[1]: " << matriz[1] << endl;
    cout << "   Direccion de matriz[2]: " << matriz[2] << endl;
    
    cout << "\n5. Direcciones de algunos elementos:" << endl;
    cout << "   Direccion de matriz[0][0]: " << &matriz[0][0] << endl;
    cout << "   Direccion de matriz[1][2]: " << &matriz[1][2] << endl;
    cout << "   Direccion de matriz[2][3]: " << &matriz[2][3] << endl;
    
    cout << "\n6. Liberando memoria..." << endl;
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    
    cout << "   Memoria liberada correctamente." << endl;
    
    return 0;
}
