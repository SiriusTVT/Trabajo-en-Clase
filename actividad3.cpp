#include <iostream>
using namespace std;

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    
    cout << "=== ACTIVIDAD No. 3 ===" << endl;
    
    cout << "\n1. Array inicial:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "   array[" << i << "] = " << array[i] << endl;
    }
    
    int* puntero = array;
    
    cout << "\n2. Modificando elementos con puntero:" << endl;
    *(puntero + 0) = 100;
    *(puntero + 1) = 200;
    *(puntero + 2) = 300;
    *(puntero + 3) = 400;
    *(puntero + 4) = 500;
    
    cout << "\n3. Array después de modificar con puntero:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "   array[" << i << "] = " << array[i] << endl;
    }
    
    cout << "\n4. Direcciones de memoria:" << endl;
    cout << "   Direccion del array (array): " << array << endl;
    cout << "   Direccion del puntero (puntero): " << puntero << endl;
    cout << "   Direccion del puntero mismo (&puntero): " << &puntero << endl;
    
    cout << "\n5. Elementos del array y sus direcciones:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "   array[" << i << "] = " << array[i] 
             << " | Direccion: " << &array[i] 
             << " | Con puntero: " << (puntero + i) << endl;
    }
    
    return 0;
}
