# Makefile para compilar los programas de C++

CC = g++
CFLAGS = -std=c++11 -Wall
TARGETS = actividad1.exe actividad2.exe actividad3.exe actividad4.exe

# Objetivo por defecto: compilar todos
all: $(TARGETS)

# Compilar actividad1.exe
actividad1.exe: actividad1.cpp
	$(CC) $(CFLAGS) actividad1.cpp -o actividad1.exe

# Compilar actividad2.exe
actividad2.exe: actividad2.cpp
	$(CC) $(CFLAGS) actividad2.cpp -o actividad2.exe

# Compilar actividad3.exe
actividad3.exe: actividad3.cpp
	$(CC) $(CFLAGS) actividad3.cpp -o actividad3.exe

# Compilar actividad4.exe
actividad4.exe: actividad4.cpp
	$(CC) $(CFLAGS) actividad4.cpp -o actividad4.exe

# Ejecutar todos los programas
run: all
	@echo "=== Ejecutando Actividad 1 ==="
	@.\actividad1.exe
	@echo "\n=== Ejecutando Actividad 2 ==="
	@.\actividad2.exe
	@echo "\n=== Ejecutando Actividad 3 ==="
	@.\actividad3.exe
	@echo "\n=== Ejecutando Actividad 4 ==="
	@.\actividad4.exe

# Limpiar archivos compilados
clean:
	del /q actividad1.exe actividad2.exe actividad3.exe actividad4.exe 2>nul || true

# Ayuda
help:
	@echo "Uso: make [target]"
	@echo ""
	@echo "Targets disponibles:"
	@echo "  all      - Compila todos los programas (por defecto)"
	@echo "  run      - Compila y ejecuta todos los programas"
	@echo "  clean    - Elimina los archivos compilados"
	@echo "  help     - Muestra esta ayuda"

.PHONY: all run clean help
