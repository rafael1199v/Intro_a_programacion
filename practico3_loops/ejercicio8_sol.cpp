//Solucion al ejercicio 8
#include <iostream>
#include <string>
using namespace std;
//Reutilizamos el codigo del ejercicio 7
int main() {
    string query, word;
    getline(cin, query);
    //green parrot
    for(int i = 0; i < query.size(); ++i){
        if(query[i] != ' '){
            word += query[i]; //se guaradaran los caracteres que no sean espacios
        }
        else if (query[i] == ' '){ //si encuentra un espacio que mueste la palabra guardada en word en pantalla y reiniciamos la variable
            cout << "[" << word << "]" << endl;
            word = "";
        }
    }
    cout << "[" << word << "]" << endl; //como la ultima palabra no esta seguida de un espacio entonces para mostrarla, la sacamos del bucle for.

    return 0;
}