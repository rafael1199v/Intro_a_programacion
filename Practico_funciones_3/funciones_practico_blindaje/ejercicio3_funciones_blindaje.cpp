#include <iostream>

using namespace std;

//Se debe calcular el restante de la madera contrachapada mediane el uso de una formula
// S = w * d + 2 *(w * h + d * h)

/**
 * @brief Pide los datos necesarios para hacer los calculos
 * @Input - void
 * @Output - void
 */
void user_input();

// Function prototypes
/**
 * @brief Calcula el valor restante de la madera contrachapada
 * @Input - float, float, float
 * @Output - void
 */
void madera_calculator(float& w, float& d, float& h, float& madera_inicial);

int main()
{
  user_input();

  return 0;
}

// Function definitions

void user_input()
{
  float cantidad_cajas, madera_inicial, w, d, h;

  cout << "Introduce la madera inicial: ";
  cin >> madera_inicial;
  cout << "Introduce el numero de cajas: ";
  cin >> cantidad_cajas;
  cout << "Introduce el ancho: ";
  cin >> w;
  cout << "Introduce el alto: ";
  cin >> h;
  cout << "Introduce la profundidad: ";
  cin >> d;

  for (int i = 0; i < cantidad_cajas; i++){
    if(madera_inicial < 0){
        cout << "Hubo un error" << endl;
        break;
    }
    else{
        madera_calculator(w, d, h, madera_inicial);
    }

  }
}

void madera_calculator(float& w, float& d, float& h, float& madera_inicial)
{
    float area;
    area = w * d + 2*(w * h + d * h);
    madera_inicial -= area;
    if (madera_inicial < 0){
        cout << "Ya no queda madera" << endl;
    }
    else{
        cout << "Madera contrachapada restante: \n" << madera_inicial << endl;
    }
}