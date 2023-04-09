#include <iostream>
#include <string>

using namespace std;

int main() {
    int hexadecimal, i; //Variables para el bucle y para la expresion hexadecimal
    string binario_reves, binario;

    cout << "Ingrese el numero que quiera convertir a binario: " << endl;
    cin >> hexadecimal; // El usuario ingresa el numero.

    while (hexadecimal != 0){ //Mientras que el cociente no sea 0 que evalue la expresion si es par o impar.

       if (hexadecimal % 2 != 0){ //Si es impar, se le agrega un 1 a la variable binario.
        binario_reves += "1";
       }
       else{                      //Por el contrario se le agrega un 0.
        binario_reves += "0";
       }
       hexadecimal /= 2; //Y la expresion se la divide entre 2 hasta que el cociente sea 0
    }
    for(i = binario_reves.size() - 1 ; i >= 0; --i){ //Guardamos en otra variable la anterior expresion para obtenerla al revés
        binario += binario_reves[i];
    }
    cout << binario; //Mostramos el resultado en pantalla

    return 0;
}