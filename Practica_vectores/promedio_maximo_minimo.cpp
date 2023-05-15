#include <iostream>
#include <vector>
using namespace std;
//Prototipos de funcion
//Pide los 15 datos al usuario
void user_input(vector<int>& lista);

//Encuentra el maximo valor del vector mediante una variable que se compara con todos los elementos del vector mediante una iteracion.
int maximo(vector<int>& lista);

//La inversa de la funcion maxima, es decir encuentra el minimo valor
int minimo(vector<int>& lista);

//Suma cada elemento del vector y lo divide por el numero de elementos
float promedio(vector<int>& lista);

int main() {
    int min, max;
    float prom;
    vector<int> numeros = {};
    user_input(numeros);
    max = maximo(numeros);
    min = minimo(numeros);
    prom = promedio(numeros);
    cout << "El valor maximo es: " << max << endl;
    cout << "El valor minimo es: " << min << endl;
    cout << "El promedio es: " << prom << endl;
    
    return 0;
}

void user_input(vector<int>& lista){
    int a;
    for (int i = 0; i < 15; i++){
        cin >> a;
        lista.push_back(a);
    }
    
}

int maximo(vector<int>& lista){
    int comparador = lista[0];
    for (int i = 0; i < lista.size(); ++i){
        if (lista[i] > comparador){
            comparador = lista[i];
        }
    }
    return comparador;
}

int minimo(vector<int>& lista){
    int comparador = lista[0];
    for (int i = 0; i < lista.size(); ++i){
        if (lista[i] < comparador){
            comparador = lista[i];
        }
    }
    return comparador;
}

float promedio(vector<int>& lista){
    float suma = 0;
    for (int i = 0; i < lista.size(); i++){
        suma += lista[i];
    }
    suma /= lista.size();
    return suma;
}
