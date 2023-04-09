#include <iostream>
#include <string>

using namespace std;

int main() {
    int dia_numero; // Declaramos solo 1 variable.

    cout << "Introduzca el numero: "; //Pedimos el numero al usuario.
    cin >> dia_numero;

    switch(dia_numero){ //Evaluamos el dato ingresado y en caso de "n" numero muestre en pantalla el dia correspondiente (0 < n < 8).
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;

        default:
            cout << "El numero no esta en el rango de 1-7" << endl; //Si no ocurre ninguno de los casos anteriores se mostrará en pantalla un mensaje de error.
            break;
    }
    return 0;
}