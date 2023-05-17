#include <iostream>

using namespace std;

/*
Escriba un programa que simule las aventuras nocturnas del ciudadano. Puede averiguar
si hay un pastel leyendo el número de cin . Solo tomará dos valores:
1 - todavía hay torta,
0 - se acabó la torta.
*/

// Function prototypes

/**
 * @brief Obtiene los datos necesarios para saber si el ciudadano fue a la heladera y encontro torta o no.
 * @Input - void
 * @Output - string
 */
string eat_cake_simulator();

/**
 * @brief Con los datos recibidos determina si hay pastel o no en la heladera
 * @Input - string&
 * @Output - void
 */
void cake_no_cake(const string& cakes);

int main()
{
  string cakes;
  cakes = eat_cake_simulator();
  cake_no_cake(cakes);

  return 0;
}

// Function definitions

string eat_cake_simulator()
{
    string person_life_eating;
    getline(cin, person_life_eating);
    return person_life_eating;
}

void cake_no_cake(const string& cakes)
{
    int go_fridge = 0;
    for (int i = 0; i < cakes.size(); ++i){
        if (cakes[i] == '1'){
            go_fridge += 1;
            cout << "Om-nom-nom :P" << endl;
        }
        if (go_fridge > 9){
            break;
        }
        if (cakes[i] == '0'){
            cout << "No cake :(" << endl;
            break;
        }
    }
}