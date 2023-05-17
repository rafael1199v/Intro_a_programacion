#include <iostream>
#include <string>

using namespace std;

/*
Se da un número. Se quiere encontrar si el número dado es un palíndromo o no.
El usuario debe introducir cualquier numero entero.
*/

// Function prototypes

/**
 * @brief Pide al usuario que introduzca un numero y retorna.
 * @Input - void
 * @Output - int
 */
int get_number();

/**
 * @brief Con el valor obtenido, verifica si es palindromo o no y lo imprime en pantalla (convierte el numero de int a string)
 * @Input - int&
 * @Output - void
 */
void palindrome_check(const int& num);

 /**
 * @brief Esta es una funcion que se llamara dentro la funcion palindrome_check que voltea en otra variable la cadena principal y la retorna.
 * @Input - string&
 * @Output - string&
 */
string reverse_string(const string& number);

int main()
{
  int number;
  number = get_number();
  palindrome_check(number);

  return 0;
}

// Function definitions

int get_number()
{
    int a;
    cout << "Introduce el numero del que quieras saber si es un palindromo: ";
    cin >> a;
    return a;
}


void palindrome_check(const int& num)
{
    string number;
    string reverse_number;

    number = to_string(num);
    reverse_number = reverse_string(number);

    if (number == reverse_number){ //Si son iguales dira que es un palindromo.
        cout << "Es un palindromo!!!" << endl;
    }
    else{ //En otro caso, se mostrará en pantalla que no es un palíndromo.
        cout << "No es un palindromo" << endl;
    }


}

string reverse_string(const string& number)
{
    string reverse_number = "";
    for (int i = number.size() - 1; i >= 0; --i){
        reverse_number += number[i];
    }
    return reverse_number;
}