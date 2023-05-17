#include <iostream>

using namespace std;

//Se da una letra de tipo char
//Se tiene que encontrar si el caracter dado esta en mayusculas o no

// Function prototypes

/**
 * @brief Pide un caracter al usuario
 * @Input - void
 * @Output - char
 */
char get_character();

/**
 * @brief Verifica si el caracter esta en mayusculas, minusculas, o no es caracter.
 * @Input - char
 * @Output - void
 */
void check_character(const char& letter);

int main()
{
  char letter;
  letter = get_character();
  check_character(letter);

  return 0;
}

// Function definitions

char get_character()
{
   char a;
   cin >> a;

   return a;
}

void check_character(const char& letter)
{
    if (letter >= 'a' && letter <= 'z'){
        cout << "El caracter esta en minusculas" << endl;
    }
    else if (letter >= 'A' && letter <= 'Z'){
        cout << "El caracter esta en mayusculas"s << endl;
    }
    else {
        cout << "No es un caracter"s << endl;
    }
}