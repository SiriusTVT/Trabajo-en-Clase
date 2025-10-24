# Trabajo-en-Clase

---

## Descripción
Proyecto educativo que implementa conceptos fundamentales de C++ relacionados con punteros, referencias y gestión de memoria dinámica. Incluye 4 actividades principales y un programa extra que demuestra la arquitectura de memoria (Stack, Heap, Code).

## Autor
**Juan David Troncoso**

## Fecha de Entrega
24 de octubre de 2025

---

## Contenido del Proyecto

### Actividades Implementadas
- **Actividad 1:** Variables y Punteros Básicos (`actividad1.cpp`)
- **Actividad 2:** Punteros y Referencias (`actividad2.cpp`)
- **Actividad 3:** Arrays y Aritmética de Punteros (`actividad3.cpp`)
- **Actividad 4:** Asignación Dinámica de Memoria 2D (`actividad4.cpp`)
- **Extra:** Stack, Heap y Code (`extra.cpp`)

### Documentación
- `README.md` - Este archivo
- `INFORME.md` - Informe detallado de implementación
- `INFORME.html` - Informe en formato HTML
- `Makefile` - Automatización de compilación

### Configuración
- `.gitignore` - Configuración de Git para ignorar archivos compilados

---

## Compilación y Ejecución

### Requisitos
- Compilador C++ (g++)
- Estándar C++11 o superior

### Compilar Todos los Programas
```bash
g++ -std=c++11 actividad1.cpp -o actividad1.exe
g++ -std=c++11 actividad2.cpp -o actividad2.exe
g++ -std=c++11 actividad3.cpp -o actividad3.exe
g++ -std=c++11 actividad4.cpp -o actividad4.exe
g++ -std=c++11 extra.cpp -o extra.exe
```

### Ejecutar los Programas
```bash
.\actividad1.exe
.\actividad2.exe
.\actividad3.exe
.\actividad4.exe
.\extra.exe
```

---

## Conceptos Clave

### Punteros
- Declaración y asignación
- Desreferenciación
- Aritmética de punteros
- Acceso a memoria

### Referencias
- Declaración de referencias
- Diferencias con punteros
- Uso en modificación indirecta

### Memoria Dinámica
- Asignación con `new`
- Liberación con `delete`
- Prevención de memory leaks
- Matrices dinámicas 2D

### Segmentos de Memoria
- **Stack:** Variables locales
- **Heap:** Memoria dinámica
- **Data Segment:** Variables globales
- **Code:** Instrucciones del programa

---

## Estructura del Repositorio
```
Trabajo-en-Clase/
├── actividad1.cpp
├── actividad2.cpp
├── actividad3.cpp
├── actividad4.cpp
├── extra.cpp
├── Makefile
├── .gitignore
├── README.md
└── INFORME.md
```

---

## Notas Importantes
- Todos los programas compilaron sin errores
- No hay memory leaks
- Código limpio y bien estructurado
- Salida clara y documentada

---

## Licencia
Este proyecto es de uso educativo.

