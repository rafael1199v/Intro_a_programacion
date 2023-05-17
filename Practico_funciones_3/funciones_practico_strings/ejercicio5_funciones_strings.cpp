#include <iostream>
#include <vector>
using namespace std;

/*
Compras un smartphone en una tienda con un sistema de descuento flexible. Si el costo
original del teléfono es más de A bolivianos, se establece un descuento del X por ciento.
Si el costo original del teléfono inteligente es más de B bolivianos, el descuento será Y
por ciento.
*/

// Function prototypes

/**
 * @brief Pide el valor de smartphone, A bolivianos, X por ciento, B bolivianos, Y por ciento
 * @Input - void
 * @Output - vector<float>
 */
vector<float> discount_system();

/**
 * @brief Del vector dado como parametro, devuelve el valor del precion inicial mas el descuento si lo tiene
 * @Input - vector<float>&
 * @Output - float
 */
float get_discount(const vector<float>& a);

/**
 * @brief Muestra el resultado en pantalla
 * @Input - float&
 * @Output - void
 */
void show_results(const float& discount);

int main()
{
  vector<float> values;
  float new_price;

  values = discount_system();
  new_price = get_discount(values);
  show_results(new_price);


  return 0;
}

// Function definitions

vector<float> discount_system()
{
    vector<float> c;
    float value;

    for(int i = 0; i < 5; ++i){
        cin >> value;
        c.push_back(value);
    }

    return c;
}

float get_discount(const vector<float>& a)
{
    float result;
    //N >> A >> B >> X >> Y;
    if (a[0] > a[2]){  // Decimos que si N es mayor a B que me aplique el descuento de la letra Y
        result = a[0] - (a[0] * a[4]/100);
        return result;
    }
    else if (a[0] > a[1]){  // Si no ocurre la primera condicion que se ejecute esta
        result = a[0] - (a[0] * a[3]/100);
        return result;
    }
    else { // Si N no es mayor a A o a B entonces que te devuelva el valor de N
        return a[0];
    }
}

void show_results(const float& discount)
{
    cout << "El nuevo precio actual del smartphone es: " << discount << endl;
}