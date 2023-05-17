#include <iostream>

using namespace std;

//Se debe leer el nombre y apellido separados por un espacio
//Debe generar el nombre completo en el formato <Apellido>, <Nombre>

// Function prototypes

/**
 * @brief Pide el nombre completo al usuario
 * @Input - string&, string&
 * @Output - void
 */
void get_data(string& name, string& last_name);

/**
 * @brief Intercambia el orden de los datos y los muestra en pantalla
 * @Input - string&, string&
 * @Output - void
 */
void showInfo(const string& name, const string& last_name);

int main()
{
  string name, last_name;
  get_data(name, last_name);
  showInfo(name, last_name);

  return 0;
}

// Function definitions
void get_data(string& name, string& last_name)
{
    cin >> name >> last_name;
}

void showInfo(const string& name, const string& last_name)
{
    cout << last_name << ", " << name << endl;
}