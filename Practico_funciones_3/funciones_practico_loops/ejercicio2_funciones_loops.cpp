#include <iostream>

using namespace std;

/*
Hacer un programa en el que tengas que adivinar un numero entre el 1 y el 10 usando un bucle do-while
*/

// Function prototypes

/**
 * @brief Inicia el juego hasta que el usuario adivine el numero
 * @Input - void
 * @Output - void
 */
void guess_the_number();

int main()
{
  guess_the_number();

  return 0;
}

// Function definitions

void guess_the_number()
{
    int a = 5, b, intentos = 0;

    cout << "Hola, bienvenido a \"Guess the number\"" << endl;

    do{
      cout << "Intenta adivinar el numero que estoy pensando entre un rango de 1 y 10" << endl;
      cout << "Guess the Number ! : ";
      cin >> b;
      ++intentos;
    } while (a != b);
    cout << "Felicidades has superado el juego" << endl;
    cout << "Numero de intentos: " << intentos << endl;

}