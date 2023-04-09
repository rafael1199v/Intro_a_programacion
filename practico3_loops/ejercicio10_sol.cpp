//Solucion ejercicio 10
#include <iostream>
using namespace std;
int main() {
    int bill;
    int sum = 0;
    do {
        cin >> bill;
        //Cambiamos el continue por un if si bill es mayor a 0
        if (bill > 0){ 
            cout << "Income: " << bill << endl;
            sum += bill;
            
            // la señal del final del programa será una cuenta de cero
        }
    } while (bill != 0);
    
    cout << "Total income: " << sum << endl;
    return 0; 
}
