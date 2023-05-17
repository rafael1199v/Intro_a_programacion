#include <iostream>

using namespace std;

//Desarrollar un programa para mostrar entre que numeros se encuentra y el valor del numero por 2.

// Function prototypes

/**
 * @brief Obtiene el dato de valor numerico ingresado por el usuario
 * @Input - void
 * @Output - int
 */
int get_user_input();

/**
 * @brief Muestra en pantalla entre que numeros esta el programa
 * @Input - int
 * @Output - void
 */
void localizador(int a);

/**
 * @brief Calcula el doble del numero recibido y la muestra en pantalla.
 * @Input - int
 * @Output - void
 */
void doblador(int a);

int main()
{
  int numero;

  numero = get_user_input();
  localizador(numero);
  doblador(numero);

  return 0;
}

// Function definitions

int get_user_input()
{
  int numero;
  cout << "Introduzca el numero: ";
  cin >> numero;
  return numero;
}

void localizador(int a)
{
  cout << "El numero " << a << " esta entre " << a - 1 << " y " << a + 1 << "." << endl;
}

void doblador(int a)
{
  cout << "El numero doblado, su valor es: " << a * 2 << endl;
}