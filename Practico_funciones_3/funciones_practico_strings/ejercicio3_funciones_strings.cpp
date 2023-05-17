#include <iostream>
#include <vector>

using namespace std;

//Julia perdio a su cachorro Fibo.
//El signo especial de figo es que tiene grabado su collar el codigo 11235813
//Escriba un programa que use el codigo del collar para determinar si pertenece a Fibo

// Function prototypes

/**
 * @brief Pide el codigo de Fibo
 * @Input - void
 * @Output - int
 */
int fibonacci_code();

/**
 * @brief Recibe el codigo de fibbonci y muestra en pantalla si es o no el verdadero
 * @Input - int
 * @Output - void
 */
void check_code(const int& number);

int main()
{
  int fibo_code;
  fibo_code = fibonacci_code();
  check_code(fibo_code);

  return 0;
}

// Function definitions

int fibonacci_code()
{
   int code;
   cout << "Introduzca el codigo de Fibo: ";
   cin >> code;

   return code;
}

void check_code(const int& number)
{
    if (number == 11235813){
        cout << "Se encontro a Fibonacci" << endl;
    }
    else{
        cout << "Este no es Fibonacci" << endl;
    }
}