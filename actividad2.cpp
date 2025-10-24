#include <iostream>
using namespace std;

int main() {
    int variable = 50;
    int* puntero = &variable;
    
    cout << "=== ACTIVIDAD No. 2 ===" << endl;
    
    cout << "\n1. Estado inicial:" << endl;
    cout << "   Valor de la variable: " << variable << endl;
    cout << "   Valor accedido por el puntero: " << *puntero << endl;
    
    cout << "\n2. Modificando el valor a traves del puntero:" << endl;
    *puntero = 75;
    cout << "   Nuevo valor de la variable: " << variable << endl;
    cout << "   Valor accedido por el puntero: " << *puntero << endl;
    
    int& referencia = variable;
    
    cout << "\n3. Modificando el valor a traves de la referencia:" << endl;
    referencia = 150;
    cout << "   Nuevo valor de la variable: " << variable << endl;
    cout << "   Valor accedido por el puntero: " << *puntero << endl;
    cout << "   Valor accedido por la referencia: " << referencia << endl;
    
    cout << "\n4. Direcciones de memoria:" << endl;
    cout << "   Direccion de la variable: " << &variable << endl;
    cout << "   Direccion almacenada en el puntero: " << puntero << endl;
    cout << "   Direccion de la referencia: " << &referencia << endl;
    cout << "   Direccion del puntero mismo: " << &puntero << endl;
    
    return 0;
}
