#include <iostream>

using namespace std;

/*
Escriba una programa que imprima dos números ingresados por el usuario desde el
primero hasta el segundo inclusive. En lugar de un ciclo while , use for.
*/

// Function prototypes

/**
 * @brief Pide el valor de un numero y lo retorna
 * @Input - void
 * @Output - int
 */
int user_input();

/**
 * @brief Con el valor inicial y final se imprime la serie de numeros correspondientes
 * @Input - int&, int&
 * @Output - void
 */
void show_numbers(const int& a, const int& b);

int main()
{
  int a, b;
  a = user_input();
  b = user_input();
  show_numbers(a, b);

  return 0;
}

// Function definitions

int user_input()
{
    static int contador = 1;
    int a;

    do{
        cout << "Introduce el valor del parametro " << contador << ":";
        cin >> a;
        if(a < 0){
            cout << "No se puede introducir numeros negativos" << endl;
        }
    } while(a < 0);

    ++contador;
    return a;
}

void show_numbers(const int& a, const int& b)
{
  if(a <= b){
    for (int i = a; i <= b; ++i){
        cout << i << endl;
    }
  }
  else{
    cout << "El primer numero debe ser menor o igual que el segundo" << endl;
  }
}