#include <iostream>
#include <string> //Librearia para la manipulacion de cadenas.

using namespace std;

int main() {
    int num, i; // Variable para el bluce y la entrada del usuario.
    string entrada, entrada_reves; //Variable de la entrada del usuario convertida en cadena y la otra es la cadena pero al reves.
    
    cout << "Ingrese el numero a evaluar: "; //Ingresan los datos
    cin >> num;
    entrada = to_string(num); // Lo convertimos a una cadena

    for (i = entrada.size() - 1; i >= 0; --i){ // Blucle para dar vuelta a la cadena inicial.
        entrada_reves += entrada[i];
    }
    if (entrada == entrada_reves){ //Si son iguales dira que es un palindromo.
        cout << "Es un palindromo!!!" << endl;
    }
    else{ //En otro caso, se mostrará en pantalla que no es un palíndromo.
        cout << "No es un palindromo" << endl;
    }
    return 0;
}