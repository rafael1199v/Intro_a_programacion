//Solucion ejercicio 1
#include <iostream>
using namespace std;
int main() {
    string casa1, casa2, casa3, casax; //Creamos las variables
    cin >> casa1 >> casa2 >> casa3 >> casax; //Obtenemos los datos de entrada
    if ((casa1 != casa2) && (casa1 != casa3) && (casa2 != casax)){ //Evaluamos que si las casas son de color diferente que funcione el programa
        if (casax == casa1){
            cout << "Enter the house 1" << endl;
        }
        else if (casax == casa2){
            cout << "Enter the house 2 " << endl;
        }
        else if (casax == casa3) {
            cout << "Enter the house 3" << endl;
        }
        else{ // Si ningun color es igual a los 3 anteriores, se muestra esto en pantalla
            cout << "Seek somewhere else" << endl;
        }
    }
    return 0;
}