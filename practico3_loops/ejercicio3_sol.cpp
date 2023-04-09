// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Introduce el valor de la primera mitad: "; cin >>a;
    cout << "Introduce el valor de la segunda mitad: "; cin >> b;
    
    if (a > 0 && b >0){
        if (a == b){
            cout << "La naranja se divide en dos partes iguales" << endl;
        }
        else if (a > b){
            cout << "Cortar " << a-b << " de la primera parte" << endl;
        }else{
            cout << "Cortar " << b-a << " de la segunda parte" << endl;
        }
        
    }
    return 0;
}