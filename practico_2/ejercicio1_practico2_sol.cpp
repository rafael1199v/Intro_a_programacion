#include <iostream>

using namespace std;

int main() {
    int money, precio_helados;

    cout << "Ingrese la cantidad de dinero: ";
    cin >> money;
    cout << "Ingrese el precio del helado: ";
    cin >> precio_helados;

    cout << "Tienes inicialmente: " << money << " dolares." << endl;
    cout << "El precio del helado es: " << precio_helados << endl;
    while (money >= 0){
        if (money - precio_helados < 0){
            cout << "Ya no puedes comprar mas helados, te quedan: " << money << " dolares." << endl;
            break;
        }
        else{
            money -= precio_helados;
            cout << "Se compro un helado!" << endl;
            cout << "Te a quedado: " << money << " dolares." << endl;
        }
    }
    
    return 0;
}