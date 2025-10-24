#include <iostream>
using namespace std;

int main() {
    // 1. Crear un programa en C++, declarar y asignar una variable entera (int)
    int variable = 42;
    
    // 2. Presentar en pantalla la dirección de memoria de esa variable
    cout << "=== ACTIVIDAD No. 1 ===" << endl;
    cout << "\n1. Variable inicial:" << endl;
    cout << "   Valor: " << variable << endl;
    cout << "   Direccion de memoria: " << &variable << endl;
    
    // 3. Modificar el valor de la variable indirectamente utilizando punteros
    int* puntero = &variable;
    *puntero = 100;
    
    // 4. Presentar nuevamente el valor de la variable y la dirección de memoria
    cout << "\n2. Despues de modificar con puntero:" << endl;
    cout << "   Nuevo valor: " << variable << endl;
    cout << "   Valor a traves del puntero: " << *puntero << endl;
    cout << "   Direccion de memoria: " << &variable << endl;
    cout << "   Direccion almacenada en el puntero: " << puntero << endl;
    
    return 0;
}
