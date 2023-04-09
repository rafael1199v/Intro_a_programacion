//Solucion ejericio 4
#include <iostream>
using namespace std;
int main() {
   int a = 5;
   int b;
   
   do {
       cout << "Guess the number: "s << endl;
       cin >> b;
   } while (a != b); //Se modifico y se arreglo la expresion del operador, de asignacion a comparacion (diferente)

   cout << "You are right!"s << endl;
    return 0;
}