#include <iostream>

using namespace std;

//Cambia el valor de dos varialbles de tipo string con una variable auxiliar

// Function prototypes
/**
 * @brief Cambia el valor de las dos variables
 * @Input - string, string
 * @Output - void
 */
void swapper(string& palabra1, string& palabra2);

int main()
{
  string palabra1, palabra2;

  cout << "Introduzca las palabras a intercambiar" << endl;
  cout << "Palabra 1: ";
  cin >> palabra1;
  cout << "Palabra 2: ";
  cin >> palabra2;
  swapper(palabra1, palabra2);

  return 0;
}

// Function definitions

void swapper(string& palabra1, string& palabra2)
{
    //Hace el cambio de las variables	
    string aux;
    aux = palabra1;
    palabra1 = palabra2;
    palabra2 = aux;

    //Muestra los valores cambiados en pantalla
    cout << "\nPalabras cambiadas:" << endl;
    cout << "Palabra 1: " << palabra1 << endl;
    cout << "Palabra 2: " <<palabra2 << endl;
}