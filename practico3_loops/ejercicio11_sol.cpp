//Solucion ejercicio 11
//Sin utilizar la libreria math.h
#include <iostream>
using namespace std;
int main() {
    float a, b, resultado = 1;
    cin >> a >> b;
    if (a == 0 && b == 0){ //Descartamos posibles errores
        cout << "Indeterminado" << endl;
    }
    else if (a != 0 && b >= 0){ //Hacemos un loop para multiplicar el mismo numero "b" veces
        for (int i = 1; i <= b; ++i){
            resultado *= a;
        }
        cout << resultado;    
    }
    else if (a != 0 && b < 0){ // si b es negativo cambiamos algunos parametros pero sigue siendo practicamente lo mismo
        for (int i = -1; i >= b; --i){
            resultado *= (1/a);
        }
        cout << resultado; 
    }
    return 0; 
}