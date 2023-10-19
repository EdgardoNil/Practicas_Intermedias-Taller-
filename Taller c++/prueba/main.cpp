#include <iostream>

using namespace std; // Declaracion de espacio de nombres para std

int main() {
/*
    int x = 5;
    int y = 3;
    int z = x + y;
    bool a = (x > y);
    bool b = (x == y);
    bool c = (x != y);
    // 1 = true
    // 0 = false
    std::cout << z << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
*/
    // << operador de inserción
    // >> operado de extraccion
    /*
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0){
        cout << "El numero es positivo " << endl;
    }else if (numero < 0) {
        cout << "EL numero es negativo" << endl;
    }else{
        cout << "error es una letra " << endl;
    }*/
    // SWITCH
    /*
    int diaSemana;
    cout << "Ingrese el dia de la semana (1-7): ";
    cin >> diaSemana;
    // for- do while - while
    switch (diaSemana) {
              case 1:
              cout << "Lunes";
              break;
              case 2:
                cout << "Martes";
                break;
              case 3:
                cout << "Miercoles";
                break;
              case 4:
                cout << "Jueves";
                break;
              case 5:
                cout << "Viernes";
                break;
              case 6:
                cout << "Sabado";
                break;
              case 7:
                cout << "Domingo";
                break;
              default:
                cout << "Dia invalido";
            }
    */
    /* ciclo for
    int valor = 0;
    for (int i = 1; i <=5; i++){
        valor++;
        cout << "Hola" << endl;
        cout << "valor: " << valor << endl;
    }
    */

    // ciclo while
    /*
    bool bandera = false;

    while (!bandera) { // Se ejecutará mientras bandera sea false
        int numero;
        cout << "Ingrese el numero: ";
        cin >> numero;

        if (numero == 5) {
            cout << "El numero es 5!!" << endl;
            bandera = true; // Cambiamos el valor de bandera a true para salir del bucle
        } else {
            cout << "Vuelva a intentarlo!!" << endl;
        }
    }
    */

    int i = 1;
    do {
        std::cout << i << " ";
        i++;
    } while (i <= 5);
    std::cout << std::endl;

    return 0;
}
