#include <iostream>

using namespace std;

/*
En anteriores ejercicios, se escribió un código de programa que: lee un número — el
número de documentos; muestra cuántos documentos encontrados: <número de
documentos> documentos encontrados. Edite el código. Si la entrada es 0, deje que el programa
genere No se encontraron documentos , si es 1: Se encontró un documento . En todos los
demás casos, el programa debe generar <número de documentos> documentos
encontrados.
*/

// Function prototypes

/**
 * @brief Obtiene el numero de documentos del usuario.
 * @Input - void
 * @Output - int
 */
int documents_found();

/**
 * @brief Imprime una respuesta dependiendo del numero de documentos encontrados
 * @Input - int&
 * @Output - void
 */
void show_info(const int& documents);

int main()
{
  int documents;
  documents = documents_found();
  show_info(documents);

  return 0;
}

// Function definitions

int documents_found()
{
    int a;
    cout << "Ingrese el numero de documentos: ";
    cin >> a;

    return a;
}

void show_info(const int& documents)
{
    if (documents < 0){
        cout << "No se aceptan numeros negativos" << endl;
        return;
    }
    switch(documents){
        case 0:
            cout << "No se encontraron documentos"s << endl;
            break;
        case 1:
            cout << "Se encontro un documento"s << endl;
            break;
        default:
            cout << documents << " documentos encontrados"s << endl;
            break;
    }
}