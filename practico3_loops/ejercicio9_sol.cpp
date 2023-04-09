//Solucion al ejercicio 9
#include <iostream>
#include <string>
using namespace std;

int main() {
   string a;
   int idas_heladera = 0; //Creamnos una variable para verificar las idas a la heladera si hay pastel
   getline(cin, a);
   
   for (int i = 0; i < a.size(); ++i){
       if (a[i] == '1'){ 
           idas_heladera += 1;
           cout << "Om-nom-nom :P" << endl;
       }
       
       if (idas_heladera >= 10){ //Si las idas a la heladera superan los 10 intentos entonces se rompe el bucle
            break;
       }
       
       if (a[i] == '0') //Si directamente se encuentra con un cero se rompe el blucle
           cout << "No cake :(" << endl;
           break;
       }
   }
    return 0;
}