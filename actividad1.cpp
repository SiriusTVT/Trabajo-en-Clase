#include <iostream>
using namespace std;

int main() {
    int variable = 42;
    
    cout << "=== ACTIVIDAD No. 1 ===" << endl;
    cout << "\n1. Variable inicial:" << endl;
    cout << "   Valor: " << variable << endl;
    cout << "   Direccion de memoria: " << &variable << endl;
    
    int* puntero = &variable;
    *puntero = 100;
    
    cout << "\n2. Despues de modificar con puntero:" << endl;
    cout << "   Nuevo valor: " << variable << endl;
    cout << "   Valor a traves del puntero: " << *puntero << endl;
    cout << "   Direccion de memoria: " << &variable << endl;
    cout << "   Direccion almacenada en el puntero: " << puntero << endl;
    
    return 0;
}
