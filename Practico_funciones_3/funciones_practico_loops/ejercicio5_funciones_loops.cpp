#include <iostream>

using namespace std;

/*
Suponga que tiene un número no negativo y tiene que calcular su factorial. Este numero
es solicitado al usuario con el flujo de entrada cin.
*/

// Function prototypes

/**
 * @brief Pide un numero para calcular su factorial
 * @Input - void
 * @Output - int
 */
int get_number_factorial();

/**
 * @brief Calcula el factorial del parametro dado y devuelve el resultado
 * @Input - int&
 * @Output - unsigned long long int
 */
unsigned long long int factorial(const int& a);

/**
 * @brief Recibe el resultado y lo muestra en pantalla
 * @Input - unsigned long long int&
 * @Output - void
 */
 void show_results(const unsigned long long int& result);

int main()
{
  unsigned long long int result;
  int a;
  a = get_number_factorial();
  result = factorial(a);
  show_results(result);

  return 0;
}

// Function definitions

int get_number_factorial()
{
    int a;
    cout << "Bienvenido a tu calculador de factoriales" << endl;
    do{ //Hacemos un bucle do while para que si el usuario digita datos no aceptados, que le vuelva a pedir el valor de "a"
       cout << "Ingrese el numero del que quiera calcular su factorial: "<< endl;
       cin >> a;
       if (a > 20){
          cout << "El numero es muy grande, por favor digite otra vez un numero." << endl;
       }
       if (a < 0){
          cout << "No se aceptan numeros negativos" << endl;
       }
    } while (a < 0 || a > 21);


    return a;
}

unsigned long long int factorial(const int& a)
{
    unsigned long long int resultado = 1;
     for (int i = 0; i < a; ++i){ //Hacemos casi la misma forma de bucle for del ejercicio anterior
            resultado *= (a-i);
     }
     return resultado;

}

void show_results(const unsigned long long int& result)
{
    cout << "El resultado del factorial es: " << result << endl;
}