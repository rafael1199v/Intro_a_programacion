#include <iostream>
#include <string>

using namespace std;

/*
Se le da un número decimal. Su tarea es convertirlo en un número binario.
*/

// Function prototypes

/**
 * @brief Pide un dato decimal al usuario y lo retorna
 * @Input - void
 * @Output - int
 */
int get_number();

/**
 * @brief el valor recibido lo convierte a binario, dividiendo entre 2 para saber si es impar o no y retorna el resultado en forma de cadena
 * @Input - int
 * @Output - string
 */
string binary_converter(int num);

 /**
 * @brief Esta es una funcion que se llamara dentro la funcion palindrome_check que voltea en otra variable la cadena principal y la retorna.
    Misma Funcion que el ejercicio 1.
 * @Input - string&
 * @Output - string&
 */
string reverse_string(const string& binary_reverse);

int main()
{
  int num;
  string binary;
  num = get_number();
  binary = binary_converter(num);
  cout << binary << endl;

  return 0;
}

// Function definitions

int get_number()
{
    int a;
    cout << "Introduce el numero decimal a convertir a binario: ";
    cin >> a;
    return a;
}


string binary_converter(int num)
{
    string binary_reverse;
    string binary;
    while (num != 0){ //Mientras que el cociente no sea 0 que evalue la expresion si es par o impar.

      if (num % 2 != 0){ //Si es impar, se le agrega un 1 a la variable binario.
        binary_reverse += "1";
      }
      else{                      //Por el contrario se le agrega un 0.
        binary_reverse += "0";
      }
      num /= 2; //Y la expresion se la divide entre 2 hasta que el cociente sea 0
    }
    binary = reverse_string(binary_reverse);

    return binary;
}

string reverse_string(const string& binary_reverse)
{
    string reverse_string = "";
    for (int i = binary_reverse.size() - 1; i >= 0; --i){
        reverse_string += binary_reverse[i];
    }
    return reverse_string;
}