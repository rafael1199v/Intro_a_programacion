//Solucion ejericio 7
#include <iostream>
#include <string>
using namespace std;
int main() {
    int letras;
    string query;
    getline(cin, query);
    //green parrot
    for (int i = 0; i <= query.size() ; ++i){ //Verificamos si en la linea hay un espacio
        if (query[i] == ' '){
            cout << i << endl; //Mostramos el valor de la variable i en ese momento
        }
    }
    cout << query.size() << endl; //Mostramos el final de la cadena en pantalla
    return 0;
}