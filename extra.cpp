#include <iostream>
#include <iomanip>
using namespace std;

int variableGlobal = 100;

void mostrarMemoria() {
    int variableLocal = 42;
    char caracteres[] = "Hola";
    double numeroDouble = 3.14;
    
    cout << "=== EXTRA: STACK, HEAP Y CODE ===" << endl;
    
    int* punteroHeap = new int(999);
    int* arrayHeap = new int[5]{10, 20, 30, 40, 50};
    
    cout << "\n1. STACK (Variables locales):" << endl;
    cout << "   variableLocal = " << variableLocal 
         << " | Direccion: " << &variableLocal << endl;
    cout << "   caracteres[] = \"" << caracteres 
         << "\" | Direccion: " << (void*)caracteres << endl;
    cout << "   numeroDouble = " << numeroDouble 
         << " | Direccion: " << &numeroDouble << endl;
    
    cout << "\n2. HEAP (Memoria asignada dinámicamente con new):" << endl;
    cout << "   *punteroHeap = " << *punteroHeap 
         << " | Direccion: " << punteroHeap << endl;
    cout << "   arrayHeap[] = ";
    for (int i = 0; i < 5; i++) {
        cout << arrayHeap[i] << " ";
    }
    cout << "\n   Direccion arrayHeap: " << arrayHeap << endl;
    cout << "   Primer elemento: " << &arrayHeap[0] << endl;
    cout << "   Ultimo elemento: " << &arrayHeap[4] << endl;
    
    cout << "\n3. CODE/DATA SEGMENT (Variables globales y constantes):" << endl;
    cout << "   variableGlobal = " << variableGlobal 
         << " | Direccion: " << &variableGlobal << endl;
    
    cout << "\n4. COMPARACIÓN DE DIRECCIONES:" << endl;
    cout << "   Stack (local):     " << &variableLocal << endl;
    cout << "   Heap (dinámico):   " << punteroHeap << endl;
    cout << "   Data (global):     " << &variableGlobal << endl;
    
    cout << "\n5. INFORMACIÓN DE PUNTEROS:" << endl;
    cout << "   Puntero a variableLocal: " << &punteroHeap << endl;
    cout << "   Valor del puntero al heap: " << punteroHeap << endl;
    cout << "   Valor apuntado: " << *punteroHeap << endl;
    
    cout << "\n6. ANATOMIA DE MEMORIA:" << endl;
    cout << "   |     CODE/TEXT      | (Código del programa)" << endl;
    cout << "   |     DATA SEGMENT   | (Globales, constantes) -> " << &variableGlobal << endl;
    cout << "   |     HEAP          | (Dynamic, crece ↑)    -> " << punteroHeap << endl;
    cout << "   |     (espacio vacío)|" << endl;
    cout << "   |     STACK         | (Locales, crece ↓)    -> " << &variableLocal << endl;
    
    delete punteroHeap;
    delete[] arrayHeap;
    cout << "\n7. Memoria del Heap liberada correctamente." << endl;
}

int main() {
    mostrarMemoria();
    
    cout << "\n8. INFORMACIÓN ADICIONAL:" << endl;
    cout << "   - STACK: Variables locales, rápido acceso, tamaño limitado" << endl;
    cout << "   - HEAP: Memoria dinámica, acceso más lento, tamaño flexible" << endl;
    cout << "   - CODE: Instrucciones del programa y variables globales" << endl;
    cout << "   - Direcciones bajas: CODE y DATA SEGMENT" << endl;
    cout << "   - Direcciones altas: STACK" << endl;
    cout << "   - Direcciones medias: HEAP" << endl;
    
    return 0;
}
