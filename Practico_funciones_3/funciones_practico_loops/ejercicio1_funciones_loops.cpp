#include <iostream>

using namespace std;

/*
Escriba un programa que pruebe la capacidad del usuario para sumar números enteros.
En su entrada se introducen tres enteros: dos términos y una suma. Si la suma ingresada
por el usuario es incorrecta, imprima la cadena “Error. The sum of 5 and 3 is 9” .
*/

// Function prototypes

/**
 * @brief Pide los datos de 3 variables al usuario, las suma, y retorna la respuesta del usuario
 * @Input - int&, int&
 * @Output - int
 */
int suma(int& x, int& y);

/**
 * @brief Verifica si la operacion esta bien o mal hecha, y con eso muestra un mensaje en pantalla
 * @Input - int&, int&, int&
 * @Output - void
 */
void checker(const int& resultado, const int& x, const int& y);

int main()
{
  int x, y, z, resultado;
  resultado = suma(x, y);
  checker(resultado, x, y);

  return 0;
}

// Function definitions

int suma(int& x, int& y)
{
    int z;
    cout << "Ingrese los valores para efectuar la suma con su correspondiente resultado: "<< endl;
    cin >> x >> y >> z;
    if ((x >= -1000000 && x <= 1000000) && (y >= -1000000 && y <= 1000000) && (z >= -1000000 && z <= 1000000)){ //Restringimos los valores de los datos de entrada
        return z;
    }
    else{
        cout << "Introduzca un rango menor de numeros" << endl;
        return -1000001;
    }

}

void checker(const int& resultado, const int& x, const int& y)
{
    int a = x + y;
    if (resultado == -1000001){
        return;
    }
    else if (a != resultado){
        cout << "Error.The sum of " << x << " and " << y << " is " << a << "." << endl;
    }
}