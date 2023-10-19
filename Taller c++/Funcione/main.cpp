#include <iostream>
using namespace std;
#include <string>
#include <fstream>

float calcular_area_rectangulo(float base, float altura) {
    float area = base * altura;
    	return area;
    }
void prueba (){
    cout << "se entro al metodo" << endl;
}

int bandera(int a, int b){
    int suma = a + b;
    return suma;
}


void arreglos(){
    // Declarar un arreglo de enteros con 5 elementos.
    string numeros[5] = {"10", "20", "30", "lunes", "prubea"};; // 0, 1, 2 , 3 , 4 , 5



    // Acceder y mostrar los elementos del arreglo.
    cout << "Elementos del arreglo:" << endl;
    for (int i = 0; i < 5; i++) {
        if (numeros[i] == "lunes"){
            cout << "numeros[" << i << "] = " << numeros[i] << endl;
            numeros[i] = "asignar valor";
            cout << "numeros[" << i << "] = " << numeros[i] << endl;
        }

    }
}

void intercambiar(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void llenarintercambiar(){
    int x = 5;
    int y = 10;
    intercambiar(&x, &y);
    std::cout << x << " " << y << std::endl;
}

// Definición de una estructura llamada 'Persona'
struct Persona {
    string nombre;
    int edad;
};

void estructuras(){
    // Declaración de variables de tipo 'Persona'
    Persona persona1;
    Persona persona2;

    // Asignación de valores a las variables de tipo 'Persona'
    persona1.nombre = "Juan";
    persona1.edad = 25;

    persona2.nombre = "Maria";
    persona2.edad = 30;

    // Mostrar la información de las personas
    cout << "Persona 1: " << persona1.nombre << ", " << persona1.edad << " anos." << endl;
    cout << "Persona 2: " << persona2.nombre << ", " << persona2.edad << " anos." << endl;
}

int main() {
    ifstream archivo("C:/Users/EdgardoNil/Desktop/datos.txt"); // Abre el archivo para lectura

    if (archivo.is_open()) { // Verifica si el archivo se abrió correctamente
        string linea;

        // Lee y muestra cada línea del archivo
        while (getline(archivo, linea)) {
            cout << linea << std::endl;
        }

        archivo.close(); // Cierra el archivo después de leerlo
    } else {
        cerr << "No se pudo abrir el archivo." << std::endl;
    }

    return 0;
}